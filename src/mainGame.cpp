#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Dungeon.h"
#include "Enemy.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Dungeon Escape");

    // Initialize game components
    Player player;
    Dungeon dungeon(10, 10); // 10x10 grid
    std::vector<Enemy> enemies = dungeon.spawnEnemies(3); // Spawn 3 enemies

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Handle player input
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) player.move(0, -1);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) player.move(0, 1);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) player.move(-1, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) player.move(1, 0);
        }

        // Update game state
        dungeon.update();
        for (auto& enemy : enemies) enemy.move();

        // Check collisions
        if (dungeon.checkCollision(player, enemies)) {
            window.close();
            std::cout << "Game Over!" << std::endl;
        }

        // Render everything
        window.clear();
        dungeon.draw(window);
        player.draw(window);
        for (auto& enemy : enemies) enemy.draw(window);
        window.display();
    }

    return 0;
}
