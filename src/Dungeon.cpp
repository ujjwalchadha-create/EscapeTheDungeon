#ifndef DUNGEON_H
#define DUNGEON_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Enemy.h"
#include "Player.h"

class Dungeon {
public:
    Dungeon(int width, int height);
    void update();
    void draw(sf::RenderWindow& window);
    bool checkCollision(const Player& player, const std::vector<Enemy>& enemies);
    std::vector<Enemy> spawnEnemies(int count);

private:
    int width, height;
    sf::RectangleShape gridCell;
    std::vector<std::vector<int>> grid; // 0: empty, 1: wall
};

#endif
