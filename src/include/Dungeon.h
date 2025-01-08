#include "Dungeon.h"
#include <cstdlib>
#include <ctime>

Dungeon::Dungeon(int width, int height) : width(width), height(height) {
    grid.resize(height, std::vector<int>(width, 0));
    gridCell.setSize(sf::Vector2f(40, 40));
    gridCell.setOutlineColor(sf::Color::Black);
    gridCell.setOutlineThickness(1);

    // Randomly generate walls
    srand(time(0));
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            grid[i][j] = rand() % 2;
        }
    }
}

void Dungeon::update() {
    // Future updates can go here
}

void Dungeon::draw(sf::RenderWindow& window) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            gridCell.setFillColor(grid[i][j] == 0 ? sf::Color::White : sf::Color::Black);
            gridCell.setPosition(j * 40, i * 40);
            window.draw(gridCell);
        }
    }
}

bool Dungeon::checkCollision(const Player& player, const std::vector<Enemy>& enemies) {
    for (const auto& enemy : enemies) {
        if (enemy.getPosition() == player.getPosition())
            return true;
    }
    return false;
}

std::vector<Enemy> Dungeon::spawnEnemies(int count) {
    std::vector<Enemy> enemies;
    for (int i = 0; i < count; ++i) {
        enemies.emplace_back(rand() % width, rand() % height);
    }
    return enemies;
}
