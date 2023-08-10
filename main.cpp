#include <iostream>
#include <fstream>
#include <sstream>
#include "Game.h"
#include <string>

using namespace std;

int main()
{

	//init srand
	std::srand(static_cast<unsigned>(time(NULL)));



	//init game engine
	Game game;

	//game loop






	
		while (game.running())
		{
			


			//update
			game.update();

			//render
			game.render();

			//end of app

		}
		return 0;

	}
