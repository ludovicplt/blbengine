#include "Image.hpp"

namespace blb
{
    Img::Img()
    {
        _img = {0, 0, 0, 1, 0};
    }

    Img::~Img()
    {
    }

    Image Img::loadImg(const std::string &fileName)
    {
        return LoadImage(fileName.c_str());
    }

    Image Img::loadImgRaw(const std::string &fileName, int width, int height,
        int format, int headerSize)
    {
        return LoadImageRaw(fileName.c_str(), width, height, format, headerSize);
    }

    Image loadImgAnim(const std::string &fileName, int *frames)
    {
        return LoadImageAnim(fileName.c_str(), frames);
    }

    Image loadImgFromMemory(const std::string &fileType,
        const unsigned char *fileData, int dataSize)
    {
        return LoadImageFromMemory(fileType.c_str(), fileData, dataSize);
    }

    Image loadImgFromTexture(Texture2D texture)
    {
        return LoadImageFromTexture(texture);
    }

    Image loadImgFromScreen(void)
    {
        return LoadImageFromScreen();
    }

    void unloadImg(Img &img)
    {
        UnloadImage(img._img);
    }

    bool exportImg(Img &img, const std::string &fileName)
    {
        return ExportImage(img._img, fileName.c_str());
    }

    bool exportImgAsCode(Img &img, const std::string &fileName)
    {
        return ExportImageAsCode(img._img, fileName.c_str());
    }

    Image genImgColor(int width, int height, Color color)
    {
        return GenImageColor(width, height, color);
    }

    Image genImgGradientV(int width, int height, Color top,
        Color bottom)
    {
        return GenImageGradientV(width, height, top, bottom);
    }

    Image genImgGradientH(int width, int height, Color left,
        Color right)
    {
        return GenImageGradientH(width, height, left, right);
    }

    Image genImgGradientRadial(int width, int height, float density,
        Color inner, Color outer)
    {
        return GenImageGradientRadial(width, height, density, inner, outer);
    }

    Image genImgChecked(int width, int height, int checksX, int checksY,
        Color c1, Color c2)
    {
        return GenImageChecked(width, height, checksX, checksY, c1, c2);
    }

    Image genImgWhiteNoise(int width, int height, float factor)
    {
        return GenImageWhiteNoise(width, height, factor);
    }

    Image GenImgCellular(int width, int height, int tileSize)
    {
        return GenImageCellular(width, height, tileSize);
    }

    Image imgCopy(Img &img)
    {
        return ImageCopy(img._img);
    }

    Image imgFromImg(Img &img, Rectangle rec)
    {
        return ImageFromImage(img._img, rec);
    }

    Image imgText(const std::string &text, int fontSize, Color color)
    {
        return ImageText(text.c_str(), fontSize, color);
    }

    Image imgTextEx(Font font, const std::string &text, float fontSize,
        float spacing, Color tint)
    {
        return ImageTextEx(font, text.c_str(), fontSize, spacing, tint);
    }

    void imgFormat(Img &img, int newFormat)
    {
        ImageFormat(&img._img, newFormat);
    }

    void imgToPOT(Img &img, Color fill)
    {
        ImageToPOT(&img._img, fill);
    }

    void imgCrop(Img &img, Rectangle crop)
    {
        ImageCrop(&img._img, crop);
    }

    void imgAlphaCrop(Img &img, float threshold)
    {
        ImageAlphaCrop(&img._img, threshold);
    }

    void imgAlphaClear(Img &img, Color color, float threshold)
    {
        ImageAlphaClear(&img._img, color, threshold);
    }

    void imgAlphaMask(Img &img, Image alphaMask)
    {
        ImageAlphaMask(&img._img, alphaMask);
    }

    void imgAlphaPremultiply(Img &img)
    {
        ImageAlphaPremultiply(&img._img);
    }

    void imgResize(Img &img, int newWidth, int newHeight, int offsetX,
        int offsetY, Color fill)
    {
        ImageResize(&img._img, newWidth, newHeight);
    }

    void imgResizeNN(Img &img, int newWidth, int newHeight)
    {
        ImageResizeNN(&img._img, newWidth, newHeight);
    }

    void imgResizeCanvas(Img &img, int newWidth, int newHeight,
        int offsetX, int offsetY, Color fill)
    {
        ImageResizeCanvas(&img._img, newWidth, newHeight, offsetX, offsetY, fill);
    }

    void imgMipMaps(Img &img)
    {
        ImageMipmaps(&img._img);
    }

    void imgDither(Img &img, int rBpp, int gBpp, int bBpp, int aBpp)
    {
        ImageDither(&img._img, rBpp, gBpp, bBpp, aBpp);
    }

    void imgFlipVertical(Img &img)
    {
        ImageFlipVertical(&img._img);
    }

    void imgFlipHorizontal(Img &img)
    {
        ImageFlipHorizontal(&img._img);
    }

    void imgRotateCW(Img &img)
    {
        ImageRotateCW(&img._img);
    }

    void imgRotateCCW(Img &img)
    {
        ImageRotateCCW(&img._img);
    }

    void imgColorTint(Img &img, Color color)
    {
        ImageColorTint(&img._img, color);
    }

    void imgColorInvert(Img &img)
    {
        ImageColorInvert(&img._img);
    }

    void imgColorGrayScale(Img &img)
    {
        ImageColorGrayscale(&img._img);
    }

    void imgColorContrast(Img &img, float contrast)
    {
        ImageColorContrast(&img._img, contrast);
    }

    void imgColorBrightness(Img &img, int brightness)
    {
        ImageColorBrightness(&img._img, brightness);
    }

    void imgColorReplace(Img &img, Color color, Color replace)
    {
        ImageColorReplace(&img._img, color, replace);
    }

    Color *loadImgColors(Img &img)
    {
        return LoadImageColors(img._img);
    }

    Color *loadImgPalette(Img &img, int maxPaletteSize,
        int *colorCount)
    {
        return LoadImagePalette(img._img, maxPaletteSize, colorCount);
    }

    void unloadImgColors(Color *colors)
    {
        UnloadImageColors(colors);
    }

    void unloadImgPalette(Color *colors)
    {
        UnloadImagePalette(colors);
    }

    Rectangle getImgAlphaBorder(Img &img, float threshold)
    {
        return GetImageAlphaBorder(img._img, threshold);
    }

    Color getImgColor(Img &img, int x, int y)
    {
        return GetImageColor(img._img, x, y);
    }

    void imgClearBg(Img &dest, Color color)
    {
        ImageClearBackground(&dest._img, color);
    }

    void imgDrawPixel(Img &dest, int posX, int posY, Color color)
    {
        ImageDrawPixel(&dest._img, posX, posY, color);
    }

    void imgDrawPixelV(Img &dest, Vector2f position, Color color)
    {
        ImageDrawPixelV(&dest._img, {position.x, position.y}, color);
    }

    void imgDrawLine(Img &dest, int startPosX, int startPosY,
        int endPosX, int endPosY, Color color)
    {
        ImageDrawLine(&dest._img, startPosX, startPosY, endPosX, endPosY, color);
    }

    void imgDrawLineV(Img &dest, Vector2f start, Vector2f end,
        Color color)
    {
        ImageDrawLineV(&dest._img, {start.x, start.y}, {end.x, end.y}, color);
    }

    void imgDrawCircle(Img &dest, int centerX, int centerY,
        int radius, Color color)
    {
        ImageDrawCircle(&dest._img, centerX, centerY, radius, color);
    }

    void imgDrawCircleV(Img &dest, Vector2f center, int radius,
        Color color)
    {
        ImageDrawCircleV(&dest._img, {center.x, center.y}, radius, color);
    }

    void imgDrawRect(Img &dest, int posX, int posY, int width,
        int height, Color color)
    {
        ImageDrawRectangle(&dest._img, posX, posY, width, height, color);
    }

    void imgDrawRectV(Img &dest, Vector2f position, Vector2f size,
        Color color)
    {
        ImageDrawRectangleV(&dest._img, {position.x, position.y},
            {size.x, size.y}, color);
    }

    void imgDrawRectRec(Img &dest, Rectangle rec, Color color)
    {
        ImageDrawRectangleRec(&dest._img, rec, color);
    }

    void imgDrawRectLines(Img &dest, Rectangle rec, int thick,
        Color color)
    {
        ImageDrawRectangleLines(&dest._img, rec, thick, color);
    }

    void imgDraw(Img &dest, Img &src, Rectangle srcRec,
        Rectangle destRec, Color tint)
    {
        ImageDraw(&dest._img, src._img, srcRec, destRec, tint);
    }

    void imgDrawTxt(Img &dest, const std::string &text, int posX, int posY,
        int fontSize, Color color)
    {
        ImageDrawText(&dest._img, text.c_str(), posX, posY, fontSize, color);
    }

    void imgDrawTxtEx(Img &dest, Font font, const std::string &text,
        Vector2f position, float fontSize, float spacing, Color tint)
    {
        ImageDrawTextEx(&dest._img, font, text.c_str(), {position.x, position.y},
            fontSize, spacing, tint);
    }
}