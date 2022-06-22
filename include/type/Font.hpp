/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Font
*/

#ifndef FONT_HPP_
#define FONT_HPP_

#include "raylib.h"


namespace blb {
    class Font {
        public:

            /**
             * @brief Construct a new Font object
             * 
             */
            Font();

            /**
             * @brief Destroy the Font object
             * 
             */
            ~Font();

            int baseSize = 0;
            int glyphCount = 0;
            int glyphPadding = 0;
            Texture2D texture;
            Rectangle *recs;
            GlyphInfo *glyphs;  

        protected:
        private:
    };
}

#endif /* !FONT_HPP_ */
