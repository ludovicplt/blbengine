/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Utils
*/

#pragma once
#include <vector>
#include <string>

class Utils {
    public:
        Utils();
        ~Utils();
        static std::vector<std::string> readDirectory(const std::string &filepath);
        static std::vector<std::string> readFile(std::string const &filepath);
        static std::vector<std::string> split(std::string const &str, std::string const &regex);

    protected:
    private:
};
