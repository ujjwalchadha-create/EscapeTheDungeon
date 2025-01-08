#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void move(int dx, int dy);
    void draw(sf::RenderWindow& window);
    sf::Vector2i getPosition() const;

private:
    sf::RectangleShape shape;
    sf::Vector2i position;
};

#endif
