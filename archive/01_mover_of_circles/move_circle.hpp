#include<SFML/Graphics.hpp>

void move_circle(sf::CircleShape& circle){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        circle.move({0.f, -1/2.f});
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        circle.move({-1/2.f, 0.f});
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        circle.move({0.f, 1/2.f});
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        circle.move({1/2.f, 0.f});
}