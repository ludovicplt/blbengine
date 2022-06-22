#pragma once

#include "raylib.h"
#include <string>
#include "Image.hpp"

namespace blb
{
    class Texture
    {
        public:
            /** Texture loading functions **/
            /** NOTE: These functions require GPU access **/
            Texture();
            ~Texture();

            Color fadeColor(Color color, float alpha);
            /**
             * @brief  Load texture from file into GPU memory (VRAM)
             * @param  &fileName: filename
             * @retval a 2D texture
             */
            Texture2D LoadTxt(std::string &fileName);

            /**
             * @brief  Load texture from image data
             * @param  image: img data
             * @retval a 2D texture
             */
            Texture2D LoadTxtFromImage(Img &image);

            /**
             * @brief  Load cubemap from image,
             *         multiple image cubemap layouts supported
             * @param  image: img
             * @param  layout: layout nb
             * @retval cubemap
             */
            TextureCubemap LoadTxtCubemap(Img &image, int layout);

            /**
             * @brief  Load texture for rendering (framebuffer)
             * @param  width: width
             * @param  height: height
             * @retval 2D render texture
             */
            RenderTexture2D LoadRenderTxt(int width, int height);

            /**
             * @brief  Unload texture from GPU memory (VRAM)
             * @param  texture: texture to be unloaded
             * @retval None
             */
            void UnloadTxt(Texture &texture);

            /**
             * @brief  Unload render texture from GPU memory (VRAM)
             * @param  target: 2D render texture to be unloaded
             * @retval None
             */
            void UnloadRenderTxt(RenderTexture2D target);

            /**
             * @brief  Update GPU texture with new data
             * @param  texture: 2D texture
             * @param  *pixels: pixels
             * @retval None
             */
            template <class T>
            void UpdateTxt(Texture &texture, const T pixels);

            /**
             * @brief  Update GPU texture rectangle with new data
             * @param  texture: 2D texture
             * @param  rec: rec (Rectangle type class Shape)
             * @param  pixels: pixels
             * @retval None
             */
            template <class T>
            void UpdateTxtRec(Texture &texture, Rectangle rec,
                const T pixels);

            /** Texture configuration functions **/

            /**
             * @brief  Generate GPU mipmaps for a texture
             * @param  *texture: 2D texture
             * @retval None
             */
            void GenTxtMipmaps(Texture &texture);

            /**
             * @brief  Set texture scaling filter mode
             * @param  texture: 2D texture
             * @param  filter: filter mode scale
             * @retval None
             */
            void SetTxtFilter(Texture &texture, int filter);

            /**
             * @brief  Set texture wrapping mode
             * @param  texture: 2D texture
             * @param  wrap: wrapper
             * @retval None
             */
            void SetTxtWrap(Texture &texture, int wrap);

            /** Texture drawing functions **/

            /**
             * @brief  Draw a Texture2D
             * @param  texture: 2D texture to be drawn
             * @param  posX: pos X texture
             * @param  posY: pos Y texture
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxt(Texture &texture, int posX, int posY, Color tint);

            /**
             * @brief  Draw a Texture2D with position defined as Vector2
             * @param  texture: 2D texture to be drawn
             * @param  position: texture pos (Vector2(x, y))
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtV(Texture &texture, Vector2f position, Color tint);

            /**
             * @brief  Draw a Texture2D with extended parameters
             * @param  texture: 2D texture to be drawn
             * @param  position: texture pos (Vector2(x, y))
             * @param  rotation: texture rotation
             * @param  scale: texture scale
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtEx(Texture &texture, Vector2f position,
                float rotation, float scale, Color tint);

            /**
             * @brief  Draw a part of a texture defined by a rectangle
             * @param  texture: 2D texture to be drawn
             * @param  source: rect src (Rectangle type class Shape)
             * @param  position: texture pos (Vector2(x, y))
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtRec(Texture &texture, Rectangle source,
                Vector2f position, Color tint);

            /**
             * @brief  Draw texture quad with tiling and offset parameters
             * @param  texture: 2D texture to be drawn
             * @param  tiling: quad tiling (Vector2(x, y))
             * @param  offset: quad offset (Vector2(x, y))
             * @param  quad: texture quad (Vector2(x, y))
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtQuad(Texture &texture, Vector2f tiling,
                Vector2f offset, Rectangle quad, Color tint);

            /**
             * @brief  Draw part of a texture (defined by a rectangle)
             *         with rotation and scale tiled into dest.
             * @param  texture: 2D texture to be drawn
             * @param  source: rect src (Rectangle type class Shape)
             * @param  dest: rect dest (Rectangle type class Shape)
             * @param  origin: origin (Vector2(x, y))
             * @param  rotation: texture rotation
             * @param  scale: texture scale
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTextTiled(Texture &texture, Rectangle source, Rectangle dest,
                Vector2f origin, float rotation, float scale, Color tint);

            /**
             * @brief  Draw a part of a texture defined by a rectangle
             *         with 'pro' parameters
             * @param  texture: 2D texture to be drawn
             * @param  source: rect src (Rectangle type class Shape)
             * @param  dest: rect dest (Rectangle type class Shape)
             * @param  origin: origin (Vector2(x, y))
             * @param  rotation: texture rotation
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtPro(Texture &texture, Rectangle source,
                Rectangle dest, Vector2f origin, float rotation, Color tint);

            /**
             * @brief  Draws a texture (or part of it)
             *         that stretches or shrinks nicely
             * @param  texture: 2D texture to be drawn
             * @param  nPatchInfo: strcut nPatchInfo
             * @param  dest: rect dest (Rectangle type class Shape)
             * @param  origin: origin (Vector2(x, y))
             * @param  rotation: texture rotation
             * @param  tint: texture tint color
             * @retval None
             */
            void DrawTxtNPatch(Texture &texture, NPatchInfo nPatchInfo,
                Rectangle dest, Vector2f origin, float rotation, Color tint);

            /**
             * @brief  Draw a textured polygon
             * @param  texture: 2D texture to be drawn
             * @param  center: polygon center (Vector2(x, y))
             * @param  *points: array of points (Vector2(x, y))
             * @param  *texcoords: array of text coords (Vector2(x, y))
             * @param  pointsCount: nb points
             * @param  tint: polygon tint color
             * @retval None
             */
            void DrawTxtPoly(Texture &texture, Vector2f center,
                Vector2f *points, Vector2f *texcoords, int pointsCount, Color tint);
        public:
            Texture2D _txt;
    };
}