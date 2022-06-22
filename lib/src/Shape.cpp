/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Shape
*/

#include "Shape.hpp"

namespace blb {

Shape::Shape()
{
}

Shape::~Shape()
{
}

void Shape::SetTextureShapes(Texture2D texture, Rectangle source)
{
    SetShapesTexture(texture, source);
}

void Shape::PixelDraw(int posX, int posY, Vector4u color)
{
    DrawPixel(posX, posY, {color.z, color.y, color.z, color.w});
}

void Shape::PixelVDraw(Vector2f position, Vector4u color)
{
    DrawPixelV({position.x, position.y}, {color.z, color.y, color.z, color.w});
}

void Shape::LineDraw(int startPosX, int startPosY, int endPosX, int endPosY, Vector4u color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, {color.z, color.y, color.z, color.w});
}

void Shape::LineVDraw(Vector2f startPos, Vector2f endPos, Vector4u color)
{
    DrawLineV({startPos.x, startPos.y}, {endPos.x, endPos.y}, {color.z, color.y, color.z, color.w});
}

void Shape::LineExDraw(Vector2f startPos, Vector2f endPos, float thick, Vector4u color)
{
    DrawLineEx({startPos.x, startPos.y}, {endPos.x, endPos.y}, thick, {color.z, color.y, color.z, color.w});
}

void Shape::LineBezierDraw(Vector2f startPos, Vector2f endPos, float thick, Vector4u color)
{
    DrawLineBezier({startPos.x, startPos.y}, {endPos.x, endPos.y}, thick, {color.z, color.y, color.z, color.w});
}

void Shape::LineBezierQuadDraw(Vector2f startPos, Vector2f endPos, Vector2f controlPos, float thick, Vector4u color)
{
    DrawLineBezierQuad({startPos.x, startPos.y}, {endPos.x, endPos.y}, {controlPos.x, controlPos.y}, thick, {color.z, color.y, color.z, color.w});
}

void Shape::LineBezierCubicDraw(Vector2f startPos, Vector2f endPos, Vector2f startControlPos, Vector2f endControlPos, float thick, Vector4u color)
{
    DrawLineBezierCubic({startPos.x, startPos.y}, {endPos.x, endPos.y}, {startControlPos.x, startControlPos.y}, {endControlPos.x, endControlPos.y}, thick, {color.z, color.y, color.z, color.w});
}

void Shape::CircleDraw(int centerX, int centerY, float radius, Vector4u color)
{
    DrawCircle(centerX, centerY, radius, {color.z, color.y, color.z, color.w});
}

void Shape::CircleSectorDraw(Vector2f center, float radius, float startAngle, float endAngle, int segments, Vector4u color)
{
    DrawCircleSector({center.x, center.y}, radius, startAngle, endAngle, segments, {color.z, color.y, color.z, color.w});
}

void Shape::CircleSectorLinesDraw(Vector2f center, float radius, float startAngle, float endAngle, int segments, Vector4u color)
{
    DrawCircleSectorLines({center.x, center.y}, radius, startAngle, endAngle, segments, {color.z, color.y, color.z, color.w});
}

void Shape::CircleGradientDraw(int centerX, int centerY, float radius, Vector4u color1, Vector4u color2)
{
    DrawCircleGradient(centerX, centerY, radius, {color1.z, color1.y, color1.z, color1.w}, {color2.z, color2.y, color2.z, color2.w});
}

void Shape::CircleVDraw(Vector2f center, float radius, Vector4u color)
{
    DrawCircleV({center.x, center.y}, radius, {color.z, color.y, color.z, color.w});
}

void Shape::CircleLinesDraw(int centerX, int centerY, float radius, Vector4u color)
{
    DrawCircleLines(centerX, centerY, radius, {color.z, color.y, color.z, color.w});
}

void Shape::EllipseDraw(int centerX, int centerY, float radiusH, float radiusV, Vector4u color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, {color.z, color.y, color.z, color.w});
}

void Shape::EllipseLinesDraw(int centerX, int centerY, float radiusH, float radiusV, Vector4u color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, {color.z, color.y, color.z, color.w});
}

void Shape::RingDraw(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Vector4u color)
{
    DrawRing({center.x, center.y}, innerRadius, outerRadius, startAngle, endAngle, segments, {color.z, color.y, color.z, color.w});
}

void Shape::RingLinesDraw(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Vector4u color)
{
    DrawRingLines({center.x, center.y}, innerRadius, outerRadius, startAngle, endAngle, segments, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleDraw(int posX, int posY, int width, int height, Vector4u color)
{
    DrawRectangle(posX, posY, width, height, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleVDraw(Vector2f position, Vector2f size, Vector4u color)
{
    DrawRectangleV({position.x, position.y}, {size.x, size.y}, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleRecDraw(Rectangle rec, Vector4u color)
{
    DrawRectangleRec(rec, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleProDraw(Rectangle rec, Vector2f origin, float rotation, Vector4u color)
{
    DrawRectanglePro(rec, {origin.x, origin.y}, rotation, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleGradientVDraw(int posX, int posY, int width, int height, Vector4u color1, Vector4u color2)
{
    DrawRectangleGradientV(posX, posY, width, height, {color1.z, color1.y, color1.z, color1.w}, {color2.z, color2.y, color2.z, color2.w});
}

void Shape::RectangleGradientHDraw(int posX, int posY, int width, int height, Vector4u color1, Vector4u color2)
{
    DrawRectangleGradientH(posX, posY, width, height, {color1.z, color1.y, color1.z, color1.w}, {color2.z, color2.y, color2.z, color2.w});
}

void Shape::RectangleGradientExDraw(Rectangle rec, Vector4u col1, Vector4u col2, Vector4u col3, Vector4u col4)
{
    DrawRectangleGradientEx(rec, {col1.z, col1.y, col1.z, col1.w}, {col2.z, col2.y, col2.z, col2.w}, {col3.z, col3.y, col3.z, col3.w}, {col4.z, col4.y, col4.z, col4.w});
}

void Shape::RectangleLinesDraw(int posX, int posY, int width, int height, Vector4u color)
{
    DrawRectangleLines(posX, posY, width, height, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleLinesExDraw(Rectangle rec, int lineThick, Vector4u color)
{
    DrawRectangleLinesEx(rec, lineThick, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleRoundedDraw(Rectangle rec, float roundness, int segments, Vector4u color)
{
    DrawRectangleRounded(rec, roundness, segments, {color.z, color.y, color.z, color.w});
}

void Shape::RectangleRoundedLinesDraw(Rectangle rec, float roundness, int segments, int lineThick, Vector4u color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, {color.z, color.y, color.z, color.w});
}

void Shape::TriangleDraw(Vector2f v1, Vector2f v2, Vector2f v3, Vector4u color)
{
    DrawTriangle({v1.x, v1.y}, {v2.x, v2.y}, {v3.x, v3.y}, {color.z, color.y, color.z, color.w});
}

void Shape::TriangleLinesDraw(Vector2f v1, Vector2f v2, Vector2f v3, Vector4u color)
{
    DrawTriangleLines({v1.x, v1.y}, {v2.x, v2.y}, {v3.x, v3.y}, {color.z, color.y, color.z, color.w});
}

void Shape::PolyDraw(Vector2f center, int sides, float radius, float rotation, Vector4u color)
{
    DrawPoly({center.x, center.y}, sides, radius, rotation, {color.z, color.y, color.z, color.w});
}

void Shape::PolyLinesDraw(Vector2f center, int sides, float radius, float rotation, Vector4u color)
{
    DrawPolyLines({center.x, center.y}, sides, radius, rotation, {color.z, color.y, color.z, color.w});
}

void Shape::PolyLinesExDraw(Vector2f center, int sides, float radius, float rotation, float lineThick, Vector4u color)
{
    DrawPolyLinesEx({center.x, center.y}, sides, radius, rotation, lineThick, {color.z, color.y, color.z, color.w});
}

bool Shape::CollisionRecsCheck(Rectangle rec1, Rectangle rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool Shape::CollisionCirclesCheck(Vector2f center1, float radius1, Vector2f center2, float radius2)
{
    return CheckCollisionCircles({center1.x, center1.y}, radius1, {center2.x, center2.y}, radius2);
}

bool Shape::CollisionCircleRecCheck(Vector2f center, float radius, Rectangle rec)
{
    return CheckCollisionCircleRec({center.x, center.y}, radius, {rec.x, rec.y, rec.width, rec.height});
}

bool Shape::CollisionPointRecCheck(Vector2f point, Rectangle rec)
{
    return CheckCollisionPointRec({point.x, point.y}, {rec.x, rec.y, rec.width, rec.height});
}

bool Shape::CollisionPointCircleCheck(Vector2f point, Vector2f center, float radius)
{
    return CheckCollisionPointCircle({point.x, point.y}, {center.x, center.y}, radius);
}

bool Shape::CollisionPointTriangleCheck(Vector2f point, Vector2f p1, Vector2f p2, Vector2f p3)
{
    return CheckCollisionPointTriangle({point.x, point.y}, {p1.x, p1.y}, {p2.x, p2.y}, {p3.x, p3.y});
}

bool Shape::CollisionPointLineCheck(Vector2f point, Vector2f p1, Vector2f p2, int threshold)
{
    return CheckCollisionPointLine({point.x, point.y}, {p1.x, p1.y}, {p2.x, p2.y}, threshold);
}

Rectangle GetRecCollision(Rectangle rec1, Rectangle rec2)
{
    return GetRecCollision(rec1, rec2);
}

}