#include <SFML/Graphics.hpp>
#include "MainWindow.hpp"

MainWindow::MainWindow()
{
    window = new sf::RenderWindow(sf::VideoMode(800,800), "The Ultimate Tic Tac Toe");
    window->display();
}

MainWindow::~MainWindow()
{
    delete window;
}
