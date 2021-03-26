#include <iostream>
#include <cmath>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include "dbg.h"


template <typename T>
std::ostream& operator<<(std::ostream& os, const sf::Vector2<T> v){
    os  << "sf::Vector2: " << v.x << ", " << v.y << ';';
    return os;
}



int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "");
    window.setVerticalSyncEnabled(true);

dbg(std::string("coucou"));

    sf::Clock deltaClock;

dbg(sf::Vector2f(2.4,2.4));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);

    

        window.display();
    }
}