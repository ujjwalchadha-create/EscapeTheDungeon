#include "Game.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Game::run() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Dungeon Escape");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        // Add game logic and rendering here
        window.display();
    }
}
