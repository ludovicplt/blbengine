/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** ControlerComponent
*/

#pragma once

#include "AComponent.hpp"
#include "Entity.hpp"
#include "blb.hpp"

class ControlerComponent : public blb::AComponent {
    public:
        ControlerComponent(int i);
        ~ControlerComponent();

        void update(void) override;
        blb::Event getKeyPressed();
        blb::Controler *remote;
        blb::Core *_core;
    protected:
    private:
};
