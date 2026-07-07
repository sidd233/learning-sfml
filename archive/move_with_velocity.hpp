#include<SFML/Graphics.hpp>

sf::Vector2f velocity(200.f, 0.f);

void move(sf::CircleShape& circle, float dt){
    circle.move(velocity * dt);
}