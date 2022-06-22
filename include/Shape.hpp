/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Shape
*/

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include "raylib.h"
#include "type/Colors.hpp"
#include "type/Vector2.hpp"

namespace blb {
class Shape {
    public:

        /**
         * @brief Shape Constructor
         */
        Shape();

        /**
         * @brief Shape Destructor
         */
        ~Shape();

        /**
         * @brief Set the texture to shape
         * @param  texture: texture
         * @param  source: source
         * @retval None
         */
        void SetTextureShapes(Texture2D texture, Rectangle source);

        /**
         * @brief  Draw pixel
         * @param  posX: position X
         * @param  posY: position Y
         * @param  &color: Color of the pixel
         * @retval None
         */
        void PixelDraw(int posX, int posY, Vector4u color);

        /**
         * @brief  Draw Pixel (Vector version)
         * @param  position: position of the pixel
         * @param  &color: color
         * @retval None
         */
        void PixelVDraw(Vector2f position, Vector4u color);

        /**
         * @brief  Draw Line 
         * @param  startPosX: Start position X of the line
         * @param  startPosY: Start position Y of the line
         * @param  endPosX: End position X of the line
         * @param  endPosY: End position Y of the line
         * @param  &color: color
         * @retval None
         */
        void LineDraw(int startPosX, int startPosY, int endPosX, int endPosY, Vector4u color);
        
        /**
         * @brief Draw line (Vector Version)
         * @param  startPos: Start position of the line 
         * @param  endPos: End position of the line
         * @param  &color: color
         * @retval None
         */
        void LineVDraw(Vector2f startPos, Vector2f endPos, Vector4u color);

        /**
         * @brief  Draw a line defining thickness
         * @param  startPos: Start position of the line 
         * @param  endPos: End position of the line
         * @param  thick: thickness of the line
         * @param  &color: color 
         * @retval None
         */
        void LineExDraw(Vector2f startPos, Vector2f endPos, float thick, Vector4u color);
        

        /**
         * @brief  Draw line Bezier
         * @param  startPos: Start position
         * @param  endPos: End position
         * @param  thick: Thickness of the line 
         * @param  &color: color
         * @retval None
         */
        void LineBezierDraw(Vector2f startPos, Vector2f endPos, float thick, Vector4u color);
        
        /**
         * @brief Draw a line using cubic-bezier curves in-out
         * @param  startPos: start position of the line
         * @param  endPos: end position of the line
         * @param  controlPos: control position of the line 
         * @param  thick: thickness of the line 
         * @param  &color: color
         * @retval None
         */
        void LineBezierQuadDraw(Vector2f startPos, Vector2f endPos, Vector2f controlPos, float thick, Vector4u color);
        
        /**
         * @brief  Draw line using cubic bezier curves with 2 control points
         * @param  startPos: Start position of the Line
         * @param  endPos: End position of the LIne
         * @param  startControlPos: Start position
         * @param  endControlPos: End position
         * @param  thick: Thickness of the Line
         * @param  &color: color
         * @retval None
         */
        void LineBezierCubicDraw(Vector2f startPos, Vector2f endPos, Vector2f startControlPos, Vector2f endControlPos, float thick, Vector4u color);
        
        /**
         * @brief  Draw lines sequence
         * @param  *points: array vector2fD
         * @param  pointsCount: count nb point in the 2D array
         * @param  &color: color
         * @retval None
         */
        // void LineStripDraw(Vector2 *points, int pointsCount, Vector4u color);
        
        /**
         * @brief  Draw a color-filled circle
         * @param  centerX: center of the circle
         * @param  centerY: center of the circle
         * @param  radius: radius of the circle
         * @param  &color: color
         * @retval None
         */
        void CircleDraw(int centerX, int centerY, float radius, Vector4u color);
        
        /**
         * @brief  Draw a piece of a circle
         * @param  center: center of the circle
         * @param  radius: radius of the circle
         * @param  startAngle: start angle of the circle
         * @param  endAngle: end angle of the circle
         * @param  segments: segment
         * @param  &color: color
         * @retval None
         */
        void CircleSectorDraw(Vector2f center, float radius, float startAngle, float endAngle, int segments, Vector4u color);
        
        /**
         * @brief  Draw circle sector outline
         * @param  center: center of the circle
         * @param  radius: radius
         * @param  startAngle: start angle of the circle
         * @param  endAngle: end angle of the circle
         * @param  segments: segment
         * @param  &color: color
         * @retval None
         */
        void CircleSectorLinesDraw(Vector2f center, float radius, float startAngle, float endAngle, int segments, Vector4u color);
        
        /**
         * @brief  Draw a gradient-filled circle
         * @param  centerX: center of the gradient circle
         * @param  centerY: center of the gradient circle
         * @param  radius: radius
         * @param  &color1: color 1
         * @param  &color2: color 2
         * @retval None
         */
        void CircleGradientDraw(int centerX, int centerY, float radius, Vector4u color1, Vector4u color2);
        
        /**
         * @brief  Draw circle within an image (Vector version)
         * @param  center: center of the circle
         * @param  radius: radius of the circle
         * @param  &color: color
         * @retval None
         */
        void CircleVDraw(Vector2f center, float radius, Vector4u color);
        
        /**
         * @brief   Draw circle outline 
         * @param  centerX: center X of the circle
         * @param  centerY: center Y of the circle
         * @param  radius: radius of the circle
         * @param  &color: color 
         * @retval None
         */
        void CircleLinesDraw(int centerX, int centerY, float radius, Vector4u color);
        
        /**
         * @brief  Draw ellipse  
         * @param  centerX: center X of the ellipse
         * @param  centerY: center Y of the ellipse
         * @param  radiusH: radius of the the ellipse
         * @param  radiusV: radius of the the ellipse
         * @param  &color: color
         * @retval None
         */
        void EllipseDraw(int centerX, int centerY, float radiusH, float radiusV, Vector4u color);
        
        /**
         * @brief   
         * @param  centerX: center X of the ellipse line
         * @param  centerY: center Y of the ellipse line
         * @param  radiusH: radius H of the ellipse line
         * @param  radiusV: radius V of the ellipse line
         * @param  &color: color
         * @retval None
         */
        void EllipseLinesDraw(int centerX, int centerY, float radiusH, float radiusV, Vector4u color);
        
        /**
         * @brief  Draw ring 
         * @param  center: center of the ring
         * @param  innerRadius: inner radius of the ring
         * @param  outerRadius: outer radius of the ring
         * @param  startAngle: start angle of the ring
         * @param  endAngle: end angle of the ring
         * @param  segments: segments of the ring
         * @param  &color: color
         * @retval None
         */
        void RingDraw(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Vector4u color);
        

        /**
         * @brief     
         * @param  center: center of the ring line
         * @param  innerRadius: radius inner of the ring line
         * @param  outerRadius: radius outer of the ring line
         * @param  startAngle: start angle of the ring line
         * @param  endAngle: end angle of the ring line
         * @param  segments: segment of the ring line
         * @param  &color: 
         * @retval None
         */
        void RingLinesDraw(Vector2f center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Vector4u color);
        
        /**
         * @brief  draw a color filled rectangle
         * @param  posX: position X of the rectangle
         * @param  posY: position Y of the rectangle
         * @param  width: width of the rectangle
         * @param  height: height of the rectangle 
         * @param  &color: color
         * @retval None
         */
        void RectangleDraw(int posX, int posY, int width, int height, Vector4u color);
        
        /**
         * @brief  Draw a color-filled rectangle (Vector version)
         * @param  position: position of the rectangle
         * @param  size: size of the rectangle
         * @param  &color: color
         * @retval None
         */
        void RectangleVDraw(Vector2f position, Vector2f size, Vector4u color);
        
        /**
         * @brief  Draw a color-filled rectangle
         * @param  rec: the rectangle to draw
         * @param  &color: color
         * @retval None
         */
        void RectangleRecDraw(Rectangle rec, Vector4u color);
        
        /**
         * @brief  Draw a color-filled rectangle with pro parameters
         * @param  rec: the rectangle to draw
         * @param  origin: origin of the rectangle
         * @param  rotation: rotation of the rectangle 
         * @param  &color: color
         * @retval None
         */
        void RectangleProDraw(Rectangle rec, Vector2f origin, float rotation, Vector4u color);
        
        /**
         * @brief    
         * @param  posX: 
         * @param  posY: 
         * @param  width: 
         * @param  height: 
         * @param  &color1: 
         * @param  &color2: 
         * @retval None
         */
        void RectangleGradientVDraw(int posX, int posY, int width, int height, Vector4u color1, Vector4u color2);
        
        /**
         * @brief  Draw a vertical-gradient-filled rectangle
         * @param  posX: position of the rectangle
         * @param  posY: position of the rectangle
         * @param  width: widthof the rectangle 
         * @param  height: height of the rectangle
         * @param  &color1: color of the rectangle
         * @param  &color2: color of the rectangle
         * @retval None
         */
        void RectangleGradientHDraw(int posX, int posY, int width, int height, Vector4u color1, Vector4u color2);
        
        /**
         * @brief  Draw a horizontal-gradient-filled rectangle
         * @param  rec: rectangle to draw
         * @param  &col1: color 1 of the rectangle
         * @param  &col2: color 2 of the rectangle
         * @param  &col3: color 3 of the rectangle
         * @param  &col4: color 4 of the rectangle
         * @retval None
         */
        void RectangleGradientExDraw(Rectangle rec, Vector4u col1, Vector4u col2, Vector4u col3, Vector4u col4);
        
        /**
         * @brief   
         * @param  posX: position X of the rectangle
         * @param  posY: position Y of the rectangle
         * @param  width: width of the rectangle
         * @param  height: height of the rectangle
         * @param  &color:  color
         * @retval None
         */
        void RectangleLinesDraw(int posX, int posY, int width, int height, Vector4u color);
        
        /**
         * @brief  Draw a gradient-filled rectangle with custom vertex colors   
         * @param  rec: rectangle to draw
         * @param  lineThick: thickness of the line
         * @param  &color: color 
         * @retval None
         */
        void RectangleLinesExDraw(Rectangle rec, int lineThick, Vector4u color);
        
        /**
         * @brief  Draw rectangle with rounded edges
         * @param  rec: regtangle to draw
         * @param  roundness: roundness of the rec
         * @param  segments: segments of the rec
         * @param  &color: color of the rec
         * @retval None
         */
        void RectangleRoundedDraw(Rectangle rec, float roundness, int segments, Vector4u color);
        
        /**
         * @brief  Draw rectangle with rounded edges outline
         * @param  rec: regtangle to draw
         * @param  roundness: roundness of the rec
         * @param  segments: segments of the rec
         * @param  lineThick: thickness of the rec
         * @param  &color: color of the rec
         * @retval None
         */
        void RectangleRoundedLinesDraw(Rectangle rec, float roundness, int segments, int lineThick, Vector4u color);
        
        /**
         * @brief  Draw a color-filled triangle (vertex in counter-clockwise order!)  
         * @param  v1: vector of the triangle
         * @param  v2: vector of the triangle
         * @param  v3: vector of the triangle
         * @param  &color: color of the triangle
         * @retval None
         */
        void TriangleDraw(Vector2f v1, Vector2f v2, Vector2f v3, Vector4u color);
        
        
        void TriangleLinesDraw(Vector2f v1, Vector2f v2, Vector2f v3, Vector4u color);
        
        /**
         * @brief  Draw a triangle fan defined by points (first vertex is the center)   
         * @param  *points: points of the triangle
         * @param  pointsCount: counter of the points
         * @param  &color: color of the triangle
         * @retval None
         */
        // void TriangleFanDraw(Vector2f *points, int pointsCount, Vector4u color);
        
        /**
         * @brief  Draw a triangle strip defined by points
         * @param  *points: points of the triangle
         * @param  pointsCount: counter of the points
         * @param  &color: color of the triangle
         * @retval None
         */
        // void TriangleStripDraw(Vector2f *points, int pointsCount, Vector4u color);
        
        /**
         * @brief  Draw a regular polygon (Vector version) 
         * @param  center: center
         * @param  sides: side
         * @param  radius: radius
         * @param  rotation: rotation
         * @param  &color: color
         * @retval None
         */
        void PolyDraw(Vector2f center, int sides, float radius, float rotation, Vector4u color);
        
        /**
         * @brief  Draw a polygon outline of n sides 
         * @param  center: center
         * @param  sides: sides
         * @param  radius: radius
         * @param  rotation: rotation
         * @param  &color: color
         * @retval None
         */
        void PolyLinesDraw(Vector2f center, int sides, float radius, float rotation, Vector4u color);
        
        /**
         * @brief  Draw a polygon outline of n sides with extended parameters
         * @param  center: center
         * @param  sides: sides
         * @param  radius: radius
         * @param  rotation: rotation
         * @param  lineThick: thickness
         * @param  &color: color
         * @retval None
         */
        void PolyLinesExDraw(Vector2f center, int sides, float radius, float rotation, float lineThick, Vector4u color);
        
        /**
         * @brief  Check collision between two rectangles
         * @param  rec1: rectangle 1
         * @param  rec2: rectangle 2
         * @retval return true if it collides, false otherwise
         */
        bool CollisionRecsCheck(Rectangle rec1, Rectangle rec2);
        
        /**
         * @brief  Check collision between two circles
         * @param  center1: center of circle 1
         * @param  radius1: radius of circle 1
         * @param  center2: center of circle 2
         * @param  radius2: radius of circle 2
         * @retval return true if it collides, false otherwise
         */
        bool CollisionCirclesCheck(Vector2f center1, float radius1, Vector2f center2, float radius2);
        
        /**
         * @brief  Check collision between circle and rectangle
         * @param  center: center of the circle
         * @param  radius: radius of the circle
         * @param  rec: rectangle
         * @retval return true if it collides, false otherwise
         */
        bool CollisionCircleRecCheck(Vector2f center, float radius, Rectangle rec);
        
        /**
         * @brief  Check if point is inside rectangle
         * @param  point: point
         * @param  rec: rectangle
         * @retval return true if it collides, false otherwise
         */
        bool CollisionPointRecCheck(Vector2f point, Rectangle rec);
        
        /**
         * @brief  Check if point is inside circle 
         * @param  point: point
         * @param  center: center of the circle
         * @param  radius: radius of the circle
         * @retval return true if it collides, false otherwise
         */
        bool CollisionPointCircleCheck(Vector2f point, Vector2f center, float radius);
        
        /**
         * @brief  Check if point is inside a triangle   
         * @param  point: point 
         * @param  p1: vector of the triangle
         * @param  p2: vector of the triangle
         * @param  p3: vector of the triangle
         * @retval return true if it collides, false otherwise
         */
        bool CollisionPointTriangleCheck(Vector2f point, Vector2f p1, Vector2f p2, Vector2f p3);
        
        /**
         * @brief  Check the collision between two lines defined by two points each
         * @param  startPos1: start position of the line 1
         * @param  endPos1: end position of the line 1
         * @param  startPos2: start position of the line 2 
         * @param  endPos2: end position of the line 2
         * @param  *collisionPoint: collision point
         * @retval return true if it collides, false otherwise
         */
        // bool CollisionLinesCheck(Vector2f startPos1, Vector2f endPos1, Vector2f startPos2, Vector2f endPos2, Vector2f *collisionPoint);
        
        /**
         * @brief  Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
         * @param  point: point
         * @param  p1: point 1 of the line
         * @param  p2: point 2 of the line
         * @param  threshold: threshold
         * @retval return true if it collides, false otherwise
         */
        bool CollisionPointLineCheck(Vector2f point, Vector2f p1, Vector2f p2, int threshold);
        
        /**
         * @brief  Get collision rectangle for two rectangles collision
         * @param  rec1: rectangle 1
         * @param  rec2: rectangle 2
         * @retval return true if it collides, false otherwise
         */
        Rectangle GetRecCollision(Rectangle rec1, Rectangle rec2);

    protected:
    private:
};
}

#endif /* !SHAPE_HPP_ */
