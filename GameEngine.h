#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "GameObject.h"

class GameEngine
{
public:
    GameEngine(int width, int height, const std::string &title);
    void run();

private:
    GameObject **gameObjects;

    int *
    Map map;
    sf::RenderWindow window;
};

#endif