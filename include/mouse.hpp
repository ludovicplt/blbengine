/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** mouse
*/

#ifndef MOUSE_HPP_
#define MOUSE_HPP_

#include "raylib.h"

namespace blb {
    /**
     * @brief  Class Mouse
     * @retval None
     */
    class Mouse {
        public:
            /**
             * @brief  Check if a mouse button has been pressed once
             * @param  button: A button
             * @retval true or false
             */
            bool IsMousePressedButton(int button);
            /**
             * @brief  Check if a mouse button is being pressed
             * @param  button: A button
             * @retval true or false
             */
            bool IsMouseDownButton(int button);
            /**
             * @brief  check if a mouse button has been released once
             * @param  button: A button
             * @retval true or false
             */
            bool IsMouseReleasedButton(int button);
            /**
             * @brief  Check if a mouse button is NOT being pressed
             * @param  button: A button
             * @retval true or false
             */
            bool IsMouseUpButton(int button);
            /**
             * @brief  Get mouse position X
             * @retval X position
             */
            int GetXMouse(void);
            /**
             * @brief  Get mouse position Y
             * @retval Y position
             */
            int GetYMouse(void);
            /**
             * @brief  Get mouse position XY
             * @retval XY position
             */
            Vector2 GetPositionMouse(void);
            /**
             * @brief  Get mouse delta between frames
             * @retval Mouse delta
             */
            Vector2 GetDeltaMouse(void);
            /**
             * @brief  Set mouse position XY
             * @param  x: X position
             * @param  y: Y position
             * @retval None
             */
            void SetPositionMouse(int x, int y);
            /**
             * @brief  Set mouse offset
             * @param  offsetX: X position
             * @param  offsetY: Y position
             * @retval None
             */
            void SetOffsetMouse(int offsetX, int offsetY);
            /**
             * @brief  Set mouse scaling
             * @param  scaleX: Scale of X
             * @param  scaleY: Scale of Y
             * @retval None
             */
            void SetScaleMouse(float scaleX, float scaleY);
            /**
             * @brief  Get mouse wheel movement Y
             * @retval Move of mouse wheel
             */
            float GetMoveMouseWheel(void);
            /**
             * @brief  Set mouse cursor
             * @param  cursor: A cursor value
             * @retval None
             */
            void SetCursorMouse(int cursor);
    };
}

#endif /* !MOUSE_HPP_ */
