#pragma once

#include "GameState.h"

class MainMenu : public TinyGameState
{
public:

	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);

private:

	sf::Font* font;
	sf::Text* title;
};