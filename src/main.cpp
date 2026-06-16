#include <SFML/Graphics.hpp>
#include "move_circle.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({1280, 720}), "Circle Mover");
	sf::CircleShape shape(10.f);
	shape.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
			if (event->is<sf::Event::Closed>())
				window.close();

		move_circle(shape);

		window.clear();
		window.draw(shape);
		window.display();
	}
}
