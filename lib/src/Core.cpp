/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Core
*/

#include "Core.hpp"
#include <raylib.h>
#include "GameState.hpp"
#include <iostream>
#include "ICamera.hpp"
#include "Audio.hpp"

namespace blb {

    Core::Core()
    {
        this->win = nullptr;
        this->pop = false;
        this->camera_ = nullptr;
    }

    Core::~Core()
    {
        if (win != nullptr)
            delete win;
        if (camera_ != nullptr)
            delete camera_;

    }

    Core* Core::core_= nullptr;;


    Core *Core::getInstance()
    {
        if (core_ == nullptr) {
            core_ = new blb::Core();
        }
        return (core_);
    }

    std::vector<std::shared_ptr<Entity>> Core::getEntities()
    {
        if (core_ != nullptr) {
            if (core_->states.empty() != true) {
                return (core_->states.top()->getEntities());
            }
        }
        std::vector<std::shared_ptr<Entity>> test;
        return (test);
    }

    void Core::addEntities(Entity *entity)
    {
        if (core_ != nullptr)
            if (core_->states.empty() != true) {
                core_->states.top()->addEntities(entity);
            }
    }

    void Core::loadScene()
    {
        if (this->states.empty() != true)
            this->states.top()->load();
    }

    void Core::removeEntities(blb::Entity const *toRemove)
    {
        core_->states.top()->removeEntities(toRemove);
    }

    bool Core::run()
    {
        this->loadScene();
        
        while (!win->shouldClse())
        {
            if (this->pop == true ) {
                this->states.pop();
                this->pop = false;
            }
            if (this->states.size() > 0) {
                this->states.top().get()->update();

                BeginDrawing();
                ClearBackground(RAYWHITE);
                if (this->camera_ != nullptr) {
                    this->camera_->beginMode(*this->camera_);
                    if (this->getEntities().empty() != true) {
                        for (auto &it : this->getEntities())
                            it->draw();
                    }
                    this->camera_->endMode();
                }
                this->states.top().get()->draw();
                EndDrawing();
            }
        }
        this->states.top().get()->unload();
        blb::Audio::CloseAudiodevice();
        return (true);
    }

    bool Core::pushGameState(std::shared_ptr<AGamestate> &state)
    {
        this->states.push(state);
        this->states.top()->load();
        return (true);
    }

    bool Core::popGameState(void)
    {
        if (this->states.empty()) {
            return (false);
        } else {
            this->pop = true;
            return (true);
        }
        return (false);
    }

    bool Core::setCamera(ICamera *camera)
    {
        this->camera_ = camera;
        return (true);
    }

    bool Core::setWindow(Window * win)
    {
        if (this->win != nullptr) {
            this->win->close();
            delete this->win;
        }
        if (!blb::Audio::IsAudiodeviceReady()) {
            blb::Audio::InitAudiodevice();
        }
        this->win = win;
        return (true);
    }

    float Core::GetTimeFrame(void)
    {
        return GetFrameTime();
    }

    bool Core::createModel(std::string const &name, std::string const &file)
    {

        Model mdl = LoadModel(file.c_str());
        Core::getInstance()->obj.insert({name, mdl});
        return (true);
    }

    Model &Core::FindModel(std::string const &name)
    {
        return (Core::getInstance()->obj.find(name)->second);
    }
}
