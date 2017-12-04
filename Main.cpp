#include "GameState.h"
#include "MainMenu.h"

GameState CoreState;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Pong!");
	
	CoreState.SetWindow(&window);
	CoreState.SetState(new MainMenu());

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Black);
		CoreState.Update();
		CoreState.Render();

		window.display();
	}

	return 0;
}