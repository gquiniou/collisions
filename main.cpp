#include <iostream>
#include <cmath>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "dbg.h"


template <typename T>
std::ostream& operator<<(std::ostream& os, const sf::Vector2<T> v){
    os  << "sf::Vector2: " << v.x << ", " << v.y << ';';
    return os;
}


class movingobject {

    private:
        sf::Shape& shape;

    void update(sf::Time dt) {

    }
};



int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "");
    window.setVerticalSyncEnabled(true);

// dbg(std::string("coucou"));
// dbg(sf::Vector2f(2.4,2.4));

    sf::Clock deltaClock;

    const sf::Time TimePerFrame = sf::seconds(1.f / 60.f);
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        sf::Time dt = clock.restart();
        timeSinceLastUpdate += dt;
        while (timeSinceLastUpdate > TimePerFrame) {
            timeSinceLastUpdate -= TimePerFrame;

           // processInput();
            //update(TimePerFrame);
            // mWindow.close();
        }

        window.clear(sf::Color::Black);

        window.display();
    }
}