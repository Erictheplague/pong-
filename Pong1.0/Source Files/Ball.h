#pragma once
#include <SFML/Graphics.hpp>


using namespace sf;


class Ball
{
private:
    Vector2f m_Position
    RectangleShape m_Shape;


    float m_Speed = 500.0f;
    float m_DirectionX = .2f;
    float m_DirectionY = .2f;


 public
    Ball(float startX, float startY);


    FloatRect getPosition();


    RectangleShape getShape();


    float getVelocity();


    void reboundSides();


    void reboundBatorTop();


    void reboundBottom();


    void updateTime(Time dt);


};


#include"Ball.h"


// This is the constructor function
Ball:Ball(float startX, float startY)
{
    m_Position.x = startX;
    m_Position.y = startY;


    m_Shape.setSize(sf::Vector2f(10,10));
    m_  Shape.setPositiom(m_Position);

}

FloatRect Ball:getPosition()
{
    return m_Shape.getGlobalBounds());
}


RectangleShape Ball::getShape()
{
    return m_Shape;

}


float Ball::getVelocity()
{
    return m_DirectionX;

}

void Bal::reboundSides()
{
    m_Direction = -m_DirectionX;
}

void Ball::reboundBatorTop()
{
    m_DirectionY = -m_DirectionY;

}


void Ball::reboundBottom()
{
    m_Position.y = 0;
    m_Position.x = 500;
    m_DirectionY = m_DirectionY;

}









