#pragma once
#include <sfml-graphics-d-2.dll>


using namespace std;
{
private:
     Vector2f m_Position;


    // A RectangleShape object
    RectangleShape m_Shape;


    float m_Speed = 1000.
    bool  m_MovingRight = false;
    bool  m_MovingLeft  = false;


public
     Bat(float startX, float startY);


     FloatRect  getPosition();


     RectangleShape getShape();


     void  moveLeft();


     void  moveRight();


     void  stopLeft();


     void   stopRight();


     void    update(Time dt);


};
