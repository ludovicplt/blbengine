#include "Texture.hpp"

namespace blb
{
    Texture::Texture()
    {
    }

    Texture::~Texture()
    {
    }

    Color Texture::fadeColor(Color color, float alpha)
    {
        return Fade(color, alpha);
    }

    Texture2D Texture::LoadTxt(std::string &fileName)
    {
        return (LoadTexture(fileName.c_str()));
    }

    Texture2D Texture::LoadTxtFromImage(Img &image)
    {
        return (LoadTextureFromImage(image._img));
    }

    TextureCubemap Texture::LoadTxtCubemap(Img &image, int layout)
    {
        return (LoadTextureCubemap(image._img, layout));
    }

    RenderTexture2D Texture::LoadRenderTxt(int width, int height)
    {
        return (LoadRenderTexture(width, height));
    }

    void Texture::UnloadTxt(Texture &texture)
    {
        UnloadTexture(texture._txt);
    }

    void Texture::UnloadRenderTxt(RenderTexture target)
    {
        UnloadRenderTexture(target);
    }

    template <class T>
    void Texture::UpdateTxt(Texture &texture, const T pixels)
    {
        UpdateTexture(texture._txt, pixels);
    }

    template <class T>
    void Texture::UpdateTxtRec(Texture &texture, Rectangle rec,
                               const T pixels)
    {
        UpdateTextureRec(texture._txt, rec, pixels);
    }

    void Texture::GenTxtMipmaps(Texture &texture)
    {
        GenTextureMipmaps(&texture._txt);
    }

    void Texture::SetTxtFilter(Texture &texture, int filter)
    {
        SetTextureFilter(texture._txt, filter);
    }

    void Texture::SetTxtWrap(Texture &texture, int wrap)
    {
        SetTextureWrap(texture._txt, wrap);
    }

    void Texture::DrawTxt(Texture &texture, int posX, int posY, Color tint)
    {
        DrawTexture(texture._txt, posX, posY, tint);
    }

    void Texture::DrawTxtV(Texture &texture, Vector2f position, Color tint)
    {
        DrawTextureV(texture._txt, {position.x, position.y}, tint);
    }

    void Texture::DrawTxtEx(Texture &texture, Vector2f position,
                            float rotation, float scale, Color tint)
    {
        DrawTextureEx(texture._txt, {position.x, position.y}, rotation, scale, tint);
    }

    void Texture::DrawTxtRec(Texture &texture, Rectangle source,
                             Vector2f position, Color tint)
    {
        DrawTextureRec(texture._txt, source, {position.x, position.y}, tint);
    }

    void Texture::DrawTxtQuad(Texture &texture, Vector2f tiling,
                              Vector2f offset, Rectangle quad, Color tint)
    {
        DrawTextureQuad(texture._txt, {tiling.x, tiling.y}, {offset.x, offset.y},
            quad, tint);
    }

    void Texture::DrawTextTiled(Texture &texture, Rectangle source, Rectangle dest,
                                Vector2f origin, float rotation, float scale, Color tint)
    {
        DrawTextureTiled(texture._txt, source, dest, {origin.x, origin.y}, rotation, scale, tint);
    }

    void Texture::DrawTxtPro(Texture &texture, Rectangle source,
                             Rectangle dest, Vector2f origin, float rotation, Color tint)
    {
        DrawTexturePro(texture._txt, source, dest, {origin.x, origin.y}, rotation, tint);
    }

    void Texture::DrawTxtNPatch(Texture &texture, NPatchInfo nPatchInfo,
                                Rectangle dest, Vector2f origin, float rotation, Color tint)
    {
        DrawTextureNPatch(texture._txt, nPatchInfo, dest, {origin.x, origin.y}, rotation, tint);
    }
}