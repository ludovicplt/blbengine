/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Shader
*/

#ifndef SHADER_HPP_
#define SHADER_HPP_

class Shader {
    public:

        /**
         * @brief Construct a new Shader object
         *
         */
        Shader();

        /**
         * @brief Destroy the Shader object
         *
         */
        ~Shader();

        unsigned int id = 0;
        int *locs = 0;

    protected:
    private:
};

#endif /* !SHADER_HPP_ */
