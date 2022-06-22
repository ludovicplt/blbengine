#pragma once

#include "raylib.h"
#include <string>
#include "type/Vector2.hpp"

namespace blb
{
    class Img
    {
        public:
            /**
             * @brief  Img Class Constructor
             * @note   Init an Image to {0, 0, 0, 1, 0}
             *         as data, width, height, mipmaps(default value: 1), format
             */
            Img();

            /**
             * @brief  Img Class Destructor
             */
            ~Img();


            /**                Image loading funcs              **/
            /** NOTE: These functions do not require GPU access **/


            /**
             * @brief  Load img from file into CPU memory (RAM)
             * @param  &fileName: filename of the img to be loaded
             * @retval the image
             */
            Image loadImg(const std::string &fileName);

            /**
             * @brief  Load img from RAW file data
             * @param  &fileName: filename of the img to be loaded
             * @param  width: Img width
             * @param  height: Img height
             * @param  format: Img format
             * @param  headerSize: Img headerSize
             * @retval the image
             */
            Image loadImgRaw(const std::string &fileName, int width, int height,
                int format, int headerSize);

            /**
             * @brief  Load img sequence from file (frames appended to image.data)
             * @param  &fileName: filename of the img to be loaded
             * @param  *frames: img frames
             * @retval the image
             */
            Image loadImgAnim(const std::string &fileName, int *frames);

            /**
             * @brief  Load img from memory buffer
             * @param  &fileType: img fileType
             * @param  &fileData: img fileData
             * @param  dataSize: size
             * @retval the image
             */
            Image loadImgFromMemory(const std::string &fileType,
                const unsigned char *fileData, int dataSize);

            /**
             * @brief  Load image from GPU texture data
             * @param  texture: img texture
             * @retval the image
             */
            Image loadImgFromTexture(Texture2D texture);

            /**
             * @brief  Load img from screen buffer and (screenshot)
             * @retval the image
             */
            Image loadImgFromScreen(void);

            /**
             * @brief  Unload img from CPU memory (RAM)
             * @note   best that the class unload its own image
             * @param  img: img to be unloaded
             * @retval None
             */
            void unloadImg(Img &img);

            /**
             * @brief  Export img data to file, returns true on success
             * @note   best that the class unload its own image
             * @param  &img: Class Img to be exported
             * @param  &fileName: file receiving the img data
             * @retval true on success otherwise false
             */
            bool exportImg(Img &img, const std::string &fileName);

            /**
             * @brief  Export image as code file defining an array of bytes,
             *         returns true on success
             * @note   best that the class unload its own image
             * @param  &img: Class Img to be exported
             * @param  &fileName: file receiving the img data
             * @retval true on success otherwise false
             */
            bool exportImgAsCode(Img &img, const std::string &fileName);


            /** Img generation funcs **/

            /**
             * @brief  Generate image: plain color
             * @param  width: img width
             * @param  height: img height
             * @param  color: img plain color
             * @retval the image
             */
            Image genImgColor(int width, int height, Color color);

            /**
             * @brief  Generate image: vertical gradient
             * @note   Image with a vertical color shades
             * @param  width: img width
             * @param  height: img height
             * @param  top: top color
             * @param  bottom: bottom color
             * @retval the image
             */
            Image genImgGradientV(int width, int height, Color top,
                Color bottom);

            /**
             * @brief  Generate image: horizontal gradient
             * @note   Image with an horizontal color shades
             * @param  width: img width
             * @param  height: img height
             * @param  left: left color
             * @param  right: right color
             * @retval the image
             */
            Image genImgGradientH(int width, int height, Color left,
                Color right);

            /**
             * @brief  Generate image: radial gradient
             * @note   Image with a radial color shades (outer to inner)
             * @param  width: img width
             * @param  height: img height
             * @param  density: img density
             * @param  inner: inner color
             * @param  outer: outer color
             * @retval the image
             */
            Image genImgGradientRadial(int width, int height, float density,
                Color inner, Color outer);

            /**
             * @brief  Generate image: checked
             * @param  width: img width
             * @param  height: img height
             * @param  checksX: X
             * @param  checksY: Y
             * @param  c1: first color
             * @param  c2: second color
             * @retval the image
             */
            Image genImgChecked(int width, int height, int checksX, int checksY,
                Color c1, Color c2);

            /**
             * @brief  Generate image: white noise
             * @note   An img white noise like a scrambled screenTV
             * @param  width: img width
             * @param  height: img height
             * @param  factor: factor
             * @retval the image
             */
            Image genImgWhiteNoise(int width, int height, float factor);

            /**
             * @brief  Generate image: cellular algorithm.
             *         Bigger tileSize means bigger cells
             * @note   an image composed of cellular tiles
             * @param  width: img width
             * @param  height: img height
             * @param  tileSize: size per tiles
             * @retval the image
             */
            Image GenImgCellular(int width, int height, int tileSize);


            /** Img manipulation funcs **/

            /**
             * @brief  Create an image duplicate (useful for transformations)
             * @param  &img: Class img  in which is the img to be copied
             * @retval image copy
             */
            Image imgCopy(Img &img);

            /**
             * @brief  Create an image from another image piece
             * @param  &img: Class img  in which is the img to be copied
             * @param  rec: rectangle (image piece)
             * @retval new image
             */
            Image imgFromImg(Img &img, Rectangle rec);

            /**
             * @brief  Create an image from text (default font)
             * @param  &text: txt src
             * @param  fontSize: font size
             * @param  color: text color
             * @retval new img
             */
            Image imgText(const std::string &text, int fontSize, Color color);

            /**
             * @brief  Create an image from text (custom sprite font)
             * @param  font: text font
             * @param  &text: txt src
             * @param  fontSize: font size
             * @param  spacing: space
             * @param  tint: tint
             * @retval new img
             */
            Image imgTextEx(Font font, const std::string &text, float fontSize,
                float spacing, Color tint);

            /**
             * @brief  Convert image data to desired format
             * @param  &img: Class img  in which is the img to be converted
             * @param  newFormat: new format of the img
             * @retval None
             */
            void imgFormat(Img &img, int newFormat);

            /**
             * @brief  Convert image to POT (power-of-two)
             * @note   POT = Power Of Two
             * @param  &img: Class img  in which is the img to be converted
             * @param  fill: fill color
             * @retval None
             */
            void imgToPOT(Img &img, Color fill);

            /**
             * @brief  Crop an image to a defined rectangle
             * @param  &img: Class img  in which is the img to be croped
             * @param  crop: crop rectangle
             * @retval None
             */
            void imgCrop(Img &img, Rectangle crop);

            /**
             * @brief  Crop image depending on alpha value
             * @param  &img: Class img  in which is the img to be croped
             * @param  threshold: limit of alpha value
             * @retval None
             */
            void imgAlphaCrop(Img &img, float threshold);

            /**
             * @brief  Clear alpha channel to desired color
             * @param  &img: Class img  in which is the img to be modified
             * @param  color: clear color
             * @param  threshold: limit of alpha value
             * @retval None
             */
            void imgAlphaClear(Img &img, Color color, float threshold);

            /**
             * @brief  Apply alpha mask to image
             * @param  &img: Class img  in which is the img to be modified
             * @param  alphaMask: alpha mask
             * @retval None
             */
            void imgAlphaMask(Img &img, Image alphaMask);

            /**
             * @brief  Premultiply alpha channel
             * @param  &img: Class img  in which is the img to be modified
             * @retval None
             */
            void imgAlphaPremultiply(Img &img);

            /**
             * @brief  Resize image (Bicubic scaling algorithm)
             * @param  &img: Class img  in which is the img to be resized
             * @param  newWidth: new img width
             * @param  newHeight: new img height
             * @param  offsetX: offset x
             * @param  offsetY: offset y
             * @param  fill: fill color
             * @retval None
             */
            void imgResize(Img &img, int newWidth, int newHeight, int offsetX,
                int offsetY, Color fill);

            /**
             * @brief  Resize image (Nearest-Neighbor scaling algorithm)
             * @param  &img: Class img  in which is the img to be resized
             * @param  newWidth: new img width
             * @param  newHeight: new img height
             * @retval None
             */
            void imgResizeNN(Img &img, int newWidth, int newHeight);

            /**
             * @brief  Resize canvas and fill with color
             * @param  &img: Class img  in which is the img to be resized
             * @param  newWidth: new img width
             * @param  newHeight: new img height
             * @param  offsetX: offset x
             * @param  offsetY: offset y
             * @param  fill: fill color
             * @retval None
             */
            void imgResizeCanvas(Img &img, int newWidth, int newHeight,
                int offsetX, int offsetY, Color fill);

            /**
             * @brief  Generate all mipmap levels for a provided image
             * @param  &img: the img
             * @retval None
             */
            void imgMipMaps(Img &img);

            /**
             * @brief  Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
             * @note    bpp = bit per pixel
             * @param  &img: the img
             * @param  rBpp: R bpp
             * @param  gBpp: G bpp
             * @param  bBpp: B bpp
             * @param  aBpp: A bpp
             * @retval None
             */
            void imgDither(Img &img, int rBpp, int gBpp, int bBpp, int aBpp);

            /**
             * @brief  Flip image vertically
             * @param  &img: Class img  in which is the img to be flipped
             * @retval None
             */
            void imgFlipVertical(Img &img);

            /**
             * @brief  Flip image horizontally
             * @param  &img: Class img  in which is the img to be flipped
             * @retval None
             */
            void imgFlipHorizontal(Img &img);

            /**
             * @brief  Rotate image clockwise 90deg
             * @param  &img: Class img  in which is the img to be rotated
             * @retval None
             */
            void imgRotateCW(Img &img);

            /**
             * @brief  Rotate image counter-clockwise 90deg
             * @param  &img: Class img  in which is the img to be rotated
             * @retval None
             */
            void imgRotateCCW(Img &img);

            /**
             * @brief  Modify image color: tint
             * @param  &img: Class img  in which is the img to be modified
             * @param  color: color tint
             * @retval None
             */
            void imgColorTint(Img &img, Color color);

            /**
             * @brief  Modify image color: invert
             * @param  &img: Class img  in which is the img to be modified
             * @retval None
             */
            void imgColorInvert(Img &img);

            /**
             * * @brief  Modify image color: grayscale
             * @param  &img: Class img  in which is the img to be modified
             * @retval None
             */
            void imgColorGrayScale(Img &img);

            /**
             * @brief  Modify image color: contrast (-100 to 100)
             * @param  &img: Class img  in which is the img to be modified
             * @param  contrast: color contrast
             * @retval None
             */
            void imgColorContrast(Img &img, float contrast);

            /**
             * @brief  Modify image color: brightness (-255 to 255)
             * @param  &img: Class img  in which is the img to be modified
             * @param  brightness: color brightness
             * @retval None
             */
            void imgColorBrightness(Img &img, int brightness);

            /**
             * @brief  Modify image color: replace color
             * @param  &img: Class img  in which is the img to be modified
             * @param  color: color to be replace
             * @param  replace: color : replacer
             * @retval None
             */
            void imgColorReplace(Img &img, Color color, Color replace);

            /**
             * @brief  Load color data from image as a Color array (RGBA - 32bit)
             * @param  &img: Class img source
             * @retval array color data
             */
            Color *loadImgColors(Img &img);

            /**
             * @brief  Load colors palette from image as a Color array (RGBA - 32bit)
             * @param  &img: Class img source
             * @param  maxPaletteSize: max color palette size
             * @param  *colorsCount: array of color
             * @retval color palette array
             */
            Color *loadImgPalette(Img &img, int maxPaletteSize,
                int *colorsCount);

            /**
             * @brief  Unload color data loaded with LoadImageColors()
             * @param  *colors: array color data
             * @retval None
             */
            void unloadImgColors(Color *colors);

            /**
             * @brief  Unload colors palette loaded with LoadImagePalette()
             * @param  *colors: color palette array
             * @retval None
             */
            void unloadImgPalette(Color *colors);

            /**
             * @brief  Get image alpha border rectangle
             * @param  &img: Class img source
             * @param  threshold: alpha value limit
             * @retval alpha border rectangle
             */
            Rectangle getImgAlphaBorder(Img &img, float threshold);

            /**
             * @brief  Get image pixel color at (x, y) position
             * @param  &img: Class img source
             * @param  x: pox x
             * @param  y: pos y
             * @retval pixel color
             */
            Color getImgColor(Img &img, int x, int y);

            /** Image drawing funcs **/

            /**
             * @brief  Clear image background with given color
             * @param  &dst: Class img destination
             * @param  color: color to clear img bg
             * @retval None
             */
            void imgClearBg(Img &dst, Color color);

            /**
             * @brief  Draw pixel within an image
             * @param  &dst: Class img destination
             * @param  posX: pos X pixel on img
             * @param  posY: pos Y pixel on img
             * @param  color: pixel color
             * @retval None
             */
            void imgDrawPixel(Img &dst, int posX, int posY, Color color);

            /**
             * @brief  Draw pixel within an image (Vector version)
             * @param  &dst: Class img destination
             * @param  position: pos (Vector2(x, y))
             * @param  color: pixel color
             * @retval None
             */
            void imgDrawPixelV(Img &dst, Vector2f position, Color color);

            /**
             * @brief  Draw line within an image
             * @param  &dst: Class img destination
             * @param  startPosX: X start of line
             * @param  startPosY: Y start of line
             * @param  endPosX: X end of line
             * @param  endPosY: Y end of line
             * @param  color: line color
             * @retval None
             */
            void imgDrawLine(Img &dst, int startPosX, int startPosY,
                int endPosX, int endPosY, Color color);

            /**
             * @brief  Draw line within an image (Vector version)
             * @param  &dst: Class img destination
             * @param  start: pos start of line (Vector2(x, y))
             * @param  end: pos end of line (Vector2(x, y))
             * @param  color: color line
             * @retval None
             */
            void imgDrawLineV(Img &dst, Vector2f start, Vector2f end,
                Color color);

            /**
             * @brief  Draw circle within an image
             * @param  &dst: Class img destination
             * @param  centerX: pos x circle center
             * @param  centerY: pos y circle center
             * @param  radius: circle radius
             * @param  color: circle color
             * @retval None
             */
            void imgDrawCircle(Img &dst, int centerX, int centerY,
                int radius, Color color);

            /**
             * @brief  Draw circle within an image (Vector version)
             * @param  &dst: Class img destination
             * @param  center: pos circle center (Vector2(x, y))
             * @param  radius: circle radius
             * @param  color: circle color
             * @retval None
             */
            void imgDrawCircleV(Img &dst, Vector2f center, int radius,
                Color color);

            /**
             * @brief  Draw rectangle within an image
             * @param  &dst: Class img destination
             * @param  posX: pos x rect
             * @param  posY: pos y rect
             * @param  width: rect width
             * @param  height: rect height
             * @param  color: rect color
             * @retval None
             */
            void imgDrawRect(Img &dst, int posX, int posY, int width,
                int height, Color color);

            /**
             * @brief  Draw rectangle within an image (Vector version)
             * @param  &dst: Class img destination
             * @param  position: pos rect (Vector2(x, y))
             * @param  size: rect size (Vector2(x, y))
             * @param  color: rect color
             * @retval None
             */
            void imgDrawRectV(Img &dst, Vector2f position, Vector2f size,
                Color color);

            /**
             * @brief  Draw rectangle within an image
             * @param  &dst: Class img destination
             * @param  rec: rect (Rectangle type in Shape class)
             * @param  color: rect color
             * @retval None
             */
            void imgDrawRectRec(Img &dst, Rectangle rec, Color color);

            /**
             * @brief   rectangle lines within an image
             * @param  &dst: Class img destination
             * @param  rec: rect (Rectangle type in Shape class)
             * @param  thick: line thickness
             * @param  color: rect line color
             * @retval None
             */
            void imgDrawRectLines(Img &dst, Rectangle rec, int thick,
                Color color);

            /**
             * @brief  Draw a source image within a destination image
             *         (tint applied to source)
             * @param  &dst: Class img destination
             * @param  &src: Class img source
             * @param  srcRec: rect src (Rectangle type in Shape class)
             * @param  dstRec: rect dest (Rectangle type in Shape class)
             * @param  tint: tint color applied to src
             * @retval None
             */
            void imgDraw(Img &dst, Img &src, Rectangle srcRec,
                Rectangle dstRec, Color tint);

            /**
             * @brief  Draw text (using default font)
             *         within an image (destination)
             * @param  &dst: Class img destination
             * @param  &text: text to be drawned
             * @param  posX: pos X text
             * @param  posY: pos Y text
             * @param  fontSize: font Size
             * @param  color: text color
             * @retval None
             */
            void imgDrawTxt(Img &dst, const std::string &text, int posX,
                int posY, int fontSize, Color color);

            /**
             * @brief  Draw text (custom sprite font)
             *         within an image (destination)
             * @param  &dst: Class img dest
             * @param  font: text font
             * @param  &text: text to be drawned
             * @param  position: text pos (Vector2(x, y))
             * @param  fontSize: font Size
             * @param  spacing: text spacing
             * @param  tint: text tint color
             * @retval None
             */
            void imgDrawTxtEx(Img &dst, Font font, const std::string &text,
                Vector2f position, float fontSize, float spacing, Color tint);

        public:
            Image _img;
    };
}
