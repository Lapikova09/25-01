#include <SFML/Graphics.hpp>
#include "Header.h"
#include "functions.h"
#include "bat.h"
#include "text.h"
#include "brick.h"
#include "ball.h"
#include "brickrow.h"

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
        WINDOW_TITLE,
        Style::Titlebar | Style::Close);
    window.setFramerateLimit(FPS);

    Ball ball;
    ballInit(ball);
    Bat bat;
    batInit(bat);
    Textobj scoreText;
    TextobjInit(scoreText, ball.score);
    Brickrow brickrow;
    brickRowInit(brickrow, 10, Vector2f{ 0.f,60.f }, BRICK_WIDTH);
   
    /* Brickrow2 brickrow2;
    brickRow2Init(brickrow2, 8, Vector2f{ 80.f,100.f }, BRICK_WIDTH);
    Brickrow3 brickrow3;
    brickRow3Init(brickrow3, 6, Vector2f{ 160.f,140.f }, BRICK_WIDTH);
    Brickrow4 brickrow4;
    brickRow4Init(brickrow4, 4, Vector2f{ 240.f,180.f }, BRICK_WIDTH);
    Brickrow5 brickrow5;
    brickRow5Init(brickrow5, 2, Vector2f{ 320.f,220.f }, BRICK_WIDTH);*/
    /*Text finish;
    finish.setString(end);
    finish.setFont(font);
    finish.setCharacterSize(FONT_SIZE);
    finish.setPosition(END_TEXT_POS);*/

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        ballUpdate(ball);
        batUpdate(bat);
        TextobjUpdate(scoreText, ball.score);
        brickRowUpdate(brickrow);

     /*   brickRow2Update(brickrow2);
        brickRow3Update(brickrow3);
        brickRow4Update(brickrow4);
        brickRow5Update(brickrow5);*/
        /*if (Score == 5) {
         ball.speedX = 0.f;
         ball.speedY = 0.f;
         ball.shape.setPosition(BALL_END_POS);
         window.clear();
         window.draw(finish);
         window.display();
        }*/
        ballCollidedWithBricks(ball, brickrow);
        ballCollidedWithBat(ball, bat);

        window.clear();
        batDraw(window, bat);
        ballDraw(window, ball);
        textDraw(window, scoreText);
        brickRowDraw(window, brickrow);
       /* brickRow2Draw(window, brickrow2);
        brickRow3Draw(window, brickrow3);
        brickRow4Draw(window, brickrow4);
        brickRow5Draw(window, brickrow5);*/
        window.display();
    }
    return 0;
}