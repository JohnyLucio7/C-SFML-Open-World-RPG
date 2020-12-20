#include "Game.h"

// Static functions

// Initializer functions
void Game::initWindow()
{
	/*Creates a SFML window using options from a window.ini file.*/

	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "C++ SFML RPG");
}

// Constructors/Destructors

Game::Game() {
	this->initWindow();
}

Game::~Game() {
	delete this->window;
}



//Functions 
void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == sf::Event::Closed)
			this->window->close();
	}
}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::render()
{
	this->window->clear();

	// Render Items

	this->window->display();
}

void Game::run()
{

	while (this->window->isOpen())
	{
		this->update();
		this->render();
	}

}

