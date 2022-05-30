#include <SFML/Graphics.hpp>
using namespace sf;
#include "Circle.h"
#include "Square.h"

int main()
{
	ContextSettings settings;
	settings.antialiasingLevel = 8;
	// The object that is the main application window
	RenderWindow window(VideoMode(1100, 900), L"Логотип playstation",Style::Default,settings);

	// The main application loop. Executed while the window is open
	while (window.isOpen())
	{
		// Processing the queue of events in the loop
		Event event;
		while (window.pollEvent(event))
		{
			// The user clicked on the "cross" and wants to close the window?
			if (event.type == Event::Closed)
				//the window closes
				window.close();
		}
		window.clear(Color(91, 79, 244));

		Circle one(100.0f, 850.0f, 350.0f, 91, 79, 244,30.0f,255,255,255);
		//drawing an object according to the data provided
		window.draw(one.access_circle());
		Square two(200.0f, 200.0f, 550.0f, 350.0f, 91, 79, 244, 30.0f, 255, 255, 255);
		//drawing an object according to the data provided
		window.draw(two.access_squa());
		Square three(30.0f,300.0f,450.0f,310.0f,255,255,255,0.0f,0,0,0,30.0f);

		window.draw(three.access_squa());

		Square four(30.0f, 300.0f, 300.0f, 330.0f, 255, 255, 255, 0.0f, 0, 0, 0, 330);

		window.draw(four.access_squa());

		Circle five(100.0f, 50.0f, 390.0f, 91, 79, 244, 30.0f, 255, 255, 255,3);

		window.draw(five.access_circle());
		//output of all received data from the buffer to the display
		window.display();
	}

	return 0;
}