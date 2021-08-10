#include "board.hpp"
#include <SFML/Graphics.hpp>
int main()
{
    sf::ContextSettings settings{};
    //settings.antialiasingLevel = 8;
    
    sf::RenderWindow window(sf::VideoMode(500u, 500u), "Ultimate tic-tac-toe", sf::Style::Default, settings);
    sf::RectangleShape hLine(sf::Vector2f(10.0F, 480.0F));
    hLine.setFillColor(sf::Color::Black);
    hLine.rotate(-90.F);
    
    sf::RectangleShape vLine(sf::Vector2f(10.0F, 480.0F));
    vLine.setFillColor(sf::Color::Black);
    
    while(window.isOpen())
    {
        sf::Event event{};
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear(sf::Color::White);
        ////
        hLine.setPosition(sf::Vector2f(10.f, 166.6f));
        window.draw(hLine);
        hLine.setPosition(sf::Vector2f(10.f, 333.2f));
        window.draw(hLine);
        
        vLine.setPosition(sf::Vector2f(166.6f, 10.f));
        window.draw(vLine);
        vLine.setPosition(sf::Vector2f(333.2f, 10.f));
        window.draw(vLine);
        ////
        window.display();
    }
	return 0;
}
