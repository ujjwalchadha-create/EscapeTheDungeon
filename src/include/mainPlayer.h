#include "Player.h"

Player::Player() : position(0, 0) {
    shape.setSize(sf::Vector2f(40, 40));
    shape.setFillColor(sf::Color::Blue);
    shape.setPosition(position.x * 40, position.y * 40);
}

void Player::move(int dx, int dy) {
    position.x += dx;
    position.y += dy;
    shape.setPosition(position.x * 40, position.y * 40);
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

sf::Vector2i Player::getPosition() const {
    return position;
}
