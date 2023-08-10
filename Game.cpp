#include "Game.h"



	//private functions
void Game::initVariables()
{
	this->window = nullptr;

	//game logic

	this->points = 0;


}





void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "TB SHOOTER V0.4", sf::Style::Close);

	this->window->setFramerateLimit(60);
}

void Game::initPlayers()
{
	



}


void Game::initText()
{



	if (!font.loadFromFile("arial.ttf"))
	{
		// error...
	}

	text.setFont(font); // font is a sf::Font

	// set the string to display

	//the egg cuck is working

	std::string s = std::to_string(points);

	text.setString(s);

	// set the character size
	text.setCharacterSize(24); // in pixels, not points!

	// set the color
	text.setFillColor(sf::Color::Red);

	// set the text style
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	this->messages.push_back(this->text);


}



void Game::initButtons()
{

	this->button.setSize(sf::Vector2f(50.f, 50));




}



	//constructors / destructors
Game::Game()
{
	this->initText();
	this->initVariables();
	this->initWindow();

	this->initPlayers();
	

}

Game::~Game()
{
	delete this->window;
}
	// ssors
const bool Game::running() const
{
	return this->window->isOpen();
}





void Game::spawnFlash()
{

	this->flash.setPosition(flashx, barrely - 100);
	this->flash.setFillColor(sf::Color::Yellow);
	this->flash.setRadius(flashSize);

}

void Game::openCalendar()
{

}

void Game::spawnTiles()
{



	if (!calendarBackgrounds.loadFromFile("calendar background.png")) {
		std::cout << "error";
	}
	calendarBackground.setTexture(calendarBackgrounds);
	this->calendarBackground.setPosition(calendarx, calendary);

/*
	this->tile0.setPosition(calendarx, calendary);
	this->tile0.setFillColor(sf::Color::Green);
	this->tile0.setSize(sf::Vector2f(400, 300));
	*/
	this->tile1.setPosition(officialsx, officialsy);
	this->tile1.setFillColor(sf::Color::Blue);
	this->tile1.setSize(sf::Vector2f(600, 400));

	this->tile2.setPosition(registerx, registery);
	this->tile2.setFillColor(sf::Color::Red);
	this->tile2.setSize(sf::Vector2f(600, 400));
}

void Game::timeStuff()
{

	time += gameSpeed;
	
	if (time == 24)
	{
		day += 1;

		time = 0;

		if (month = 1)
		{

			if (day > 31)
			{
				month += 1;

				day = 1;
			}
		}
		else if (month = 2)
		{
			if (year == 1920 || year == 1924 || year == 1928)
			{
				if (day > 29)
				{
					day = 1;
					month += 1;
				}
				

			}
			else 
			{
				if (day > 28)
				{
					month += 1;
					day = 1;
				}

			}
		}
		else if (month = 3)
		{

			if (day > 31)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 4)
		{

			if (day > 30)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 5)
		{

			if (day > 31)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 6)
		{

			if (day > 30)
			{
				month += 1;
				day = 1;

			}


		}
		else if (month = 7)
		{

			if (day > 31)
			{
				month += 1;

				day = 1;
			}

		}
		else if (month = 8)
		{


			if (day > 31)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 9)
		{

			if (day > 30)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 10)
		{

			if (day > 31)
			{
				month += 1;

				day = 1;
			}

		}
		else if (month = 11)
		{

			if (day > 30)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month = 12)
		{

			if (day > 31)
			{
				month += 1;
				day = 1;

			}

		}
		else if (month > 12)
		{

			year += 1;
			month = 1;
			}
	}
}

void Game::cannonFire()
{
	
	clock.restart();
	canShoot = 0;
	barrely = 350;
	

	
}

void Game::cannonRaise()
{
	if(this->barrely < 325)
	{
		this->barrely += 3;
	}
	
}

void Game::cannonLower()
{

	if (this->barrely > 250)
	{
		this->barrely -= 3;
	}


}

void Game::cannonRight()
{

	this->barrelStartR += 1;

}

void Game::cannonLeft()
{

	this->barrelStartR -= 1;
	
}

void Game::cannonReload()
{
	reloadClock.restart();
	reloading = 1;
	
}

void Game::spawnBackground1()
{



	if (!backgroundTexture1.loadFromFile("backgroundLevel1.jpg")) {
		std::cout << "error";
	}
	backgroundSprite1.setTexture(backgroundTexture1);

	backgroundSprite1.setScale(.4, .355);



	this->backgroundSprite1.setPosition(0, 0);



}

void Game::spawnButton()
{


	this->button.setPosition(20, 80);

	this->button.setSize(sf::Vector2f(size5, size4));

	this->button.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button);

}


void Game::spawnButton2()
{


	this->button2.setPosition(20, 140);

	this->button2.setSize(sf::Vector2f(size5, size4));

	this->button2.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button2);

}


void Game::spawnButton3()
{


	this->button3.setPosition(20, 200);

	this->button3.setSize(sf::Vector2f(size5, size4));

	this->button3.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button3);

}






void Game::spawnMenu()
{
	

	this->menu.setPosition(0, 0);

	this->menu.setSize(sf::Vector2f(size1, size2));

	this->menu.setFillColor(sf::Color::Blue);

	//spawn the enemy

	//this->menus.push_back(this->menu);
}



void Game::spawnPlayer()
{

	

	this->calendarP.setPosition(0, 0);
	this->calendarP.setFillColor(sf::Color::Green);
	this->calendarP.setSize(sf::Vector2f(75, 50));
	this->calendarP.setOutlineThickness(5);
	this->calendarP.setOutlineColor(sf::Color(21, 71, 52));



	this->officialsP.setPosition(0, 55);
	this->officialsP.setFillColor(sf::Color::Green);
	this->officialsP.setSize(sf::Vector2f(75, 50));
	this->officialsP.setOutlineThickness(5);
	this->officialsP.setOutlineColor(sf::Color(21, 71, 52));


	this->registerP.setPosition(0, 110);
	this->registerP.setFillColor(sf::Color::Green);
	this->registerP.setSize(sf::Vector2f(75, 50));
	this->registerP.setOutlineThickness(5);
	this->registerP.setOutlineColor(sf::Color(21, 71, 52));


	this->selectTile.setPosition(groundx, groundy);

	this->selectTile.setSize(sf::Vector2f(50, 50));
	this->selectTile.setFillColor(sf::Color::Transparent);

	this->selectTile.setOutlineThickness(5);
	this->selectTile.setOutlineColor(sf::Color(21, 71, 52));
	//this->players.push_back(this->player);
	

}





void Game::renderText()
{





	if (!font.loadFromFile("arial.ttf"))
	{
		// error...
	}

	text.setFont(font); // font is a sf::Font

	// set the string to display

	//the egg cuck is working

	std::string d = std::to_string(day);
	std::string m = std::to_string(month);
	std::string y = std::to_string(year);

	text.setString(d + "." + m + "." + y);

	// set the character size
	text.setCharacterSize(24); // in pixels, not points!

	// set the color
	text.setFillColor(sf::Color::Red);

	// set the text style
	text.setStyle(sf::Text::Bold);

	text.setPosition(650, 10);

	//this->messages.push_back(this->text);

}



void Game::pollEvents()
{







	//Event polling
	while (this->window->pollEvent(this->ev))
	{





		if (sf::Event::Closed)
		{
			this->window->close();
			break;

		}

		if (this->ev.key.code == sf::Keyboard::Escape)
		{

			this->window->close();

		}

		if (this->ev.key.code == sf::Keyboard::Enter)
		{
		
			int i = 0;

			this->levelID = 1;
		
		}

		if (this->ev.key.code == sf::Mouse::Left)
		{


			buttony = button.getPosition().y;
			buttonyb = buttony + 100;
			buttonx = button.getPosition().x;
			buttonxb = buttonx + 50;

			
		
			this->mousey = this->mouse.getPosition().y;
			this->mousex = this->mouse.getPosition().x;

			
/*
			if (this->button.getGlobalBounds().contains(mousey, mousex))
			{

				std::cout << "working";

				this->size1 = 0;
				this->size2 = 0;
				this->size3 = 0;
				this->size4 = 0;
				this->size5 = 0;

			}
			*/


			if (this->button.getGlobalBounds().contains(this->mousePosView))
			{
				/*
							this->size1 = 0;
							this->size2 = 0;
							this->size3 = 0;
							this->size4 = 0;
							this->size5 = 0;
						*/
							this->levelID = 1;
						}


			else if (this->button2.getGlobalBounds().contains(this->mousePosView))
			{
				/*
				this->size1 = 0;
				this->size2 = 0;
				this->size3 = 0;
				this->size4 = 0;
				this->size5 = 0;
				*/
				this->levelID = 2;
			}


			else if (this->button3.getGlobalBounds().contains(this->mousePosView))
			{
				/*
				this->size1 = 0;
				this->size2 = 0;
				this->size3 = 0;
				this->size4 = 0;
				this->size5 = 0;
				*/
				this->levelID = 3;
			}

						

					}






				



			


		

	}


	//if the enemy is past the bottom of the screen

			
	/*
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				sprite.setTexture(idle);

				this->sprite.move(0, -3);
				if (this->speed < 10) {
					this->speed += 3;
				}
		
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				sprite.setTexture(idle);

				this->sprite.move(0, 3);
				if (this->speed < 10) {
					this->speed += 3;
				}
			
			}
			*/



			

			//if (this->speed > 0)
			//{
			//	this->speed -= 1;
		//	}

		




		
		}

void Game::updateMousePositions()
{

	//Mouse position relative to window



	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
	this->mousePosView = this->window->mapPixelToCoords(this->mousePosWindow);
}





	

	
	


		void Game::updateMenus()
		{


			this->updateButtons();
			this->renderText2();
			this->renderText();
			this->spawnMenu();
			this->renderText3();


		}


void Game::updatePlayersPositions()
{
}




void Game::updateButtons()
{

	std::fstream myfile;

	myfile.open("score.txt");

	if (myfile.is_open()) {
		myfile >> reedballs;

	}

	

	myfile.close();

	this->spawnButton();

	if (this->reedballs == 1)

	{

		this->spawnButton2();

	}
	
	if (this->reedballs == 11)

	{

		this->spawnButton3();

	}

	
}



void Game::updateMessage()
{


}


void Game::updatePlayers()
{

	this->spawnPlayer();

	if (this->ev.key.code == sf::Mouse::Left) {


		if (this->calendarP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			  
			this->calendarx = 200;
			this->calendary = 150;
			this->calendarOpen = true;
			this->clock.restart();
		}
		
		if (this->officialsP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{

			this->officialsx = 100;
			this->officialsy = 25;
			
			this->clock.restart();
		}
		
		if (this->registerP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{

			this->registerx = 100;
			this->registery = 25;
			
			this->clock.restart();
		}
		


		this->mousey = sf::Mouse::getPosition(*this->window).y;
		this->mousex = sf::Mouse::getPosition(*this->window).x;

		if (this->calendarBackground.getGlobalBounds().contains(this->mousePosView))
		{

			if (this->mousex < 250)
			{
				this->groundx = 200;
				this->currenttile = 10;

			}
			else if (this->mousex < 300)
			{

				this->groundx = 250;
				this->currenttile = 20;
			}
			else if (this->mousex < 350)
			{

				this->groundx = 300;
				this->currenttile = 30;
			}
			else if (this->mousex < 400)
			{

				this->groundx = 350;
				this->currenttile = 40;
			}
			else if (this->mousex < 450)
			{

				this->groundx = 400;
				this->currenttile = 50;
			}
			else if (this->mousex < 500)
			{

				this->groundx = 450;
				this->currenttile = 60;
			}
			else if (this->mousex < 550)
			{

				this->groundx = 500;
				this->currenttile = 70;
			}
			else if (this->mousex < 600)
			{

				this->groundx = 550;
				this->currenttile = 80;
			}
			if (this->mousey < 200)
			{
				this->currenttile = currenttile + 0;
				this->groundy = 150;
				//std::cout << "cheese";
			}
			else if (this->mousey < 250)
			{

				this->groundy = 200;
				this->currenttile = currenttile + 1;
			}
			else if (this->mousey < 300)
			{
				this->currenttile = currenttile + 2;
				this->groundy = 250;

			}
			else if (this->mousey < 350)
			{

				this->groundy = 300;
				this->currenttile = currenttile + 3;
			}
			else if (this->mousey < 400)
			{

				this->groundy = 350;
				this->currenttile = currenttile + 4;
			}
			else if (this->mousey < 450)
			{

				this->groundy = 400;
				this->currenttile = currenttile + 5;
			}


		}

	}


	if (this->ev.key.code == sf::Mouse::Right) {
		if (this->calendarBackground.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->calendarx = -800;
			this->calendary = 25;
			this->calendarOpen = false;
			this->clock.restart();
		}
		if (this->tile1.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->officialsx = -800;
			this->officialsy = 25;

			this->clock.restart();
		}
		if (this->tile2.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->registerx = -800;
			this->registery = 25;

			this->clock.restart();
		}
		
	
	
	}

}





void Game::update()
{
	

	




	this->pollEvents();



	if (this->levelID == 1)
	{


		this->timeStuff();



			this->spawnBackground1();

			this->updateMousePositions();

			this->updatePlayers();

			this->renderText();

			this->spawnTiles();
		
			this->openCalendar();

		

			if (this->ev.key.code == sf::Keyboard::Space);
			{

				std::cout << "spavce";
				if (this->gameSpeed == 0)
				{

					this->gameSpeed = 1;

				}
				else if (this->gameSpeed == 1)
				{

					this->gameSpeed = 0;

				}

			}
	}

	else if (this->levelID == 2)
	{


		
		this->updatePlayers();

		



		


	}

	else if (this->levelID == 3)
	{


		

		this->updatePlayers();
	}

	else {
		this->updateMenus();

		this->updateMousePositions();

		this->updateButtons();


	}
		
	

}




void Game::renderButtons()
{

	for (auto& e : this->buttons)
	{
		this->window->draw(e);
	}

}

void Game::renderText2()
{


	text2.setFont(font); // font is a sf::Font

	// set the string to display

	text2.setString("SANDWICH HOOP    THE VIDEO GAME\n SELECT A LEVEL");

	// set the character size
	text2.setCharacterSize(size3); // in pixels, not points!

	// set the color
	text2.setFillColor(sf::Color::Red);

	// set the text style
	text2.setStyle(sf::Text::Bold);




}


void Game::renderText3()
{

	

	text3.setFont(font); // font is a sf::Font

	// set the string to display

	text3.setString("Level 1\n\nLevel 2\n\nLevel3");

	// set the character size
	text3.setCharacterSize(size3); // in pixels, not points!

	// set the color
	text3.setFillColor(sf::Color::Blue);

	// set the text style
	text3.setStyle(sf::Text::Bold);

	text3.setPosition(20, 87.5);





}



void Game::renderAllText()
{

	this->renderText();
	this->renderText2();
	this->renderText3();

}

void Game::renderMenus()
{

	//rendering all the enemies

	for (auto& e : this->menus)
	{
		this->window->draw(e);
	}

}







void Game::render()
{

	/*
		renders the game objects
	*/

	this->window->clear();

	//draw game objects

	
	





	if (this->levelID == 1)
	{
		
		this->window->draw(this->backgroundSprite1);

		this->window->draw(this->text);

		this->window->draw(this->calendarP);
		this->window->draw(this->officialsP);
		this->window->draw(this->registerP);
		this->window->draw(this->text);

			this->window->draw(this->calendarBackground);
			this->window->draw(this->tile1);
			this->window->draw(this->tile2);
			this->window->draw(this->selectTile);
	}

	else if (this->levelID == 2)
	{
		
		this->window->draw(this->text);

	
	}



	else {

		this->window->draw(this->menu);
		this->window->draw(this->text2);


		this->window->draw(this->button);
		this->window->draw(this->button2);

		this->window->draw(this->button3);
		this->window->draw(this->text3);

	}


//	this->window->draw(this->logoSprite);
	
	//this->window->draw(this->player);




	this->window->display();
}

void spawnButton()
{



}
