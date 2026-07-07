#include <SFML/System.hpp>
#include <iostream>

int main()
{
    // angles and degrees
    sf::Angle angle1 = sf::degrees(180);
    sf::Angle angle1 = sf::radians(1.f);

    // wrapSigned will return a new angle wrapped to the range [-pi, pi)
    sf::Angle angle1 = sf::degrees(540).wrapUnsigned(); // 180 degrees
    // wrapUnsigned will return a new angle wrapped to the range [0, 2pi)
    sf::Angle angle2 = sf::radians(2 * 3.1415f).wrapSigned(); // 0 degrees

    using namespace sf::Literals;
    sf::Angle angle1 = 45_deg;              // 45 degrees
    sf::Angle angle2 = angle1 + 3.1415_rad; // 225 degrees

    sf::Angle angle1 = sf::radians(2);
    std::cout << angle1.asDegrees() << std::endl;

    sf::Angle angle2 = sf::degrees(270);
    std::cout << std::sin(angle2.asRadians()) << std::endl;
}
