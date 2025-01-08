#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>

class Enemy {
public:
    Enemy(int x, int y);
    void move();
    void draw(sf::RenderWindow& window);
    sf::Vector2i getPosition() const;

private:
    sf::RectangleShape shape;
    sf::Vector2i position;
};

#endif
