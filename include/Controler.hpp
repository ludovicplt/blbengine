/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Controler
*/

#pragma once

#include "Event.hpp"
#include "type/Vector3.hpp"

namespace blb {
    class Controler {
        public:
            Controler(int nb);
            ~Controler();
            Event getEvent();
            Vector3f<float> getAxisLeftMove();
            Vector3f<float> getAxisRightMove();
            bool isConnected();
            int _nb;
        private:
    };
}
