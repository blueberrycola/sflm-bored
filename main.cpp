#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main() 
{
	int window_width = 1024;
	int window_height = 768;
	//Create window for game
	sf::RenderWindow window(
		sf::VideoMode(window_width, window_height),
		"Hello Gamers", sf::Style::Titlebar |
		sf::Style::Close);
	sf::Event windowEv;

	//Game loop
	while (window.isOpen())
	{
		//Event polling
		while (window.pollEvent(windowEv))
		{
			switch (windowEv.type) 
			{
				case sf::Event::Closed:	//Event listener for clicking close btn
					window.close();
					break;
				case sf::Event::KeyPressed: //ev listener for key-pressing
					if (windowEv.key.code == sf::Keyboard::Escape)
						window.close();
					break;
			}
		}
		//Update

		//Render window
		window.clear();
		//...
		window.display(); //App done drawing
	}




	return 0;
}