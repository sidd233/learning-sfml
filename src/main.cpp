#include <SFML/System.hpp>
#include <iostream>

int main()
{
	// declaring time
	sf::Time t1 = sf::microseconds(10000);
	sf::Time t2 = sf::milliseconds(10);
	sf::Time t3 = sf::seconds(0.01f);

	// converting time
	// std::int64_t usec = time.asMicroseconds();
	// std::int32_t msec = time.asMilliseconds();
	// float sec = time.asSeconds();

	// measuring time
	sf::Clock clock; // starts the clock
	sf::Time elapsed1 = clock.getElapsedTime();
	std::cout << elapsed1.asSeconds() << std::endl;
	clock.restart();
	sf::Time elapsed2 = clock.getElapsedTime();
	std::cout << elapsed2.asSeconds() << std::endl;
	clock.stop(); // stops the clock
	std::cout << std::boolalpha << clock.isRunning() << std::endl;
	clock.reset();	   // resets elapsed time to zero
	clock.start(); // starts the clock
	sf::Time elapsed3 = clock.getElapsedTime();
	std::cout << elapsed3.asSeconds() << std::endl;
}
