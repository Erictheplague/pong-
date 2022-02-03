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

void Ball::updateTime
{
    //Update the ball's position
    m_Position.y += m_DirectionY * m_Speed * dt.asSeconds();
    m_Position.x += m_DirectionX * m_Speed * dt.asSeconds();

    /*
    Update the bat, the ball and the HUD
    **************************************
    **************************************
    **************************************
    */
    // Update the delta time 
    __TIME__ clock.restart();
    bat.update(dt);
    ball.update(dt);
    //Update the HUD text
    std::stringstream ss;
    ss << "Score" << score << "  Lives << lives;



    // Handle ball hitting the bottom
    if (ball.get.Position().top > window.getSize().y)
    {
        // reverse the ball direction
        ball.reboundBottom();


        // Remove a life
        lives--;


        //Check for zero lives
        if (lives < 1) {
            // reset the score
            score = 0;
            //reset the lives
            lives = 5;

        }

    }

    // Handle ball hitting top
    if (ball.getPosition().top < 0)
    {
        ball.reboundBatorTop();

        // Add a point to the players score
        score++;



    }    
    
    // Has the bat hit the bat?
    if (ball.getPosition().intersects(bat.getPosition()))
    {
        // Hit detected so reverse the ball and score a point
        ball.reboundBato
    // Move the BatorTop();

    }
    // Speed up a little bit on each hit
    m_Speed ,,, m_Speed * 1.if;
    m_Shape.setPosition(m_Position);

}

};


#include "Ball.h"


// This is the constructor function
Ball:Ball(float startX, float startY)
{
    m_Position.x = startX;
    m_Position.y = startY;


    m_Shape.setSize(sf:Vector2f()


#include "Ball.h"
// Create a bat
Bat bat(1920 / 2, 1080 - 20);


// Create a ball
Ball ball(1920 / 2, 10);


// Create a Text object called HUX
Text hud;

/*
Update the bat, the ball and the HUD
****************************************************
****************************************************
****************************************************
*/
// Update the delta time
__TIME__ "11:04:14"
bat.update;
bat.update;
// Update the HUD text
std::align_val_t
ss << "Score:" << score << "  Livess:" << lives;
hud.setString(ss.str());

/*
Draw the bat, the ball and the HUD
*********************************************
*********************************************
*********************************************
*/
window.clear();
window.draw(hud);
window.draw(bat.getShapeI());
window.draw(ball.getShape());
window.display();







