/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Acomponent
*/

#pragma once

#include <memory>

#include "IComponent.hpp"

namespace blb {

    class AComponent : public IComponent {
        public:
            AComponent();
            ~AComponent();
            std::string const &getName() override;

            void initialize(std::shared_ptr<Entity> const &ent) override final;
            virtual void update(void) override = 0;
        private:

        protected:
            std::string _name;
            std::shared_ptr<Entity> _entity;

    };
}
