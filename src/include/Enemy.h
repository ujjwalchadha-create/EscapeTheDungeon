#include "Enemy.h"
#include <cstdlib>

Enemy::Enemy(int x, int y) : position(x, y) {
    shape.setSize(sf::Vector2f(40, 40));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(position.x * 40, position.y * 40);
}

void Enemy::move() {
    int dx = (rand() % 3) - 1;
    int dy = (rand() % 3) - 1;
    position.x += dx;
    position.y += dy;
    shape.setPosition(position.x * 40, position.y * 40);
}

void Enemy::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

sf::Vector2i Enemy::getPosition() const {
    return position;
}
