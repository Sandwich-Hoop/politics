#pragma once



#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;



/*
	class that acts as the game engine.
	wrapper class.

*/

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:


	

	//variables
	//window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//Mouse positions
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;

	//player poritions
	sf::Vector2i playerPosWindow;
	sf::Vector2f playerPosView;

	sf::Mouse mouse;





	//game logic

	int flashSize = 0;


	int barrelx = 450;
	int barrely = 300;




	//level id determines the level to be constructed, level 0 is the menu



	int levelID = 0;

	//physics stuffffff

	int speed = 0;
	
	int reedballs;

	string tanksArray[6];

	int points;
	
	int countin = 0;
	sf::Clock clock;
	sf::Time jumpAttempt = sf::seconds(0);
	sf::Time jumpTime = sf::seconds(1);


	sf::Clock reloadClock;
	int size1 = 800;
	int size2 = 600;
	int size3 = 24;
	int size4 = 50;
	int size5 = 100;

	int totalTanks = 10;

	//gun logic

	int reloading = 0;
	int flashx = 350;
	int flashy = barrely - 100;

	int groundx = -100;
	
	string readfromcsv = "";

	string tileinfo = "";

	int currenttile = 0;

	int groundy = 0;

	float mousey;

	float mousex;

	float buttony;

	float buttonx;

	float buttonyb;

	float buttonxb;

	int tankx = 625;

	int tanky = 325;


	int orderGiven = 0;

	int orderx = 625;

	int ordery = 325;

	int canShoot = 0;

	bool deleted = false;



	int barrelStartR = 180;
	




	//IMPORTANT
	//GAME TIME

	int time = 0;
	int day = 0;
	int month = 1;
	int year = 1920;
	int gameSpeed = 0;


	//game objects



	int calendarx = -800;
	int calendary = 150;


	int officialsx = -800;
	int officialsy = 25;


	int registerx = -800;
	int registery = 25;

	bool calendarOpen = false;
	//textures




	//logic for the gndn




	//end

	//sprite texture



	//background sprite




	//shapes

	std::vector<sf::RectangleShape> buttons;
	sf::RectangleShape button;
	sf::RectangleShape button2;
	sf::RectangleShape button3;

	std::vector<sf::RectangleShape> panels;
	sf::RectangleShape calendarP;
	sf::RectangleShape officialsP;
	sf::RectangleShape registerP;


	std::vector<sf::RectangleShape> tiles;
	sf::RectangleShape tile0;
	sf::RectangleShape tile1;
	sf::RectangleShape tile2;
	sf::RectangleShape selectTile;

	std::vector<sf::RectangleShape> barrels;
	sf::RectangleShape barrel;

	std::vector<sf::CircleShape> flashes;
	sf::CircleShape flash;

	std::vector<sf::RectangleShape> wheels;
	sf::RectangleShape wheelr;



	sf::RectangleShape wheell;


	std::vector<sf::RectangleShape> chambers;
	sf::RectangleShape chamber;


	sf::Texture backgroundTexture1;
	sf::Sprite backgroundSprite1;

	sf::Texture calendarBackgrounds;
	sf::Sprite calendarBackground;

	std::vector<sf::RectangleShape> enemytanks;
	sf::RectangleShape enemytank;

	std::vector<sf::RectangleShape> menus;
	sf::RectangleShape menu;

	
	//text shit


	sf::Font font;
	sf::Text text;



	sf::Text text2;

	sf::Text text3;


	std::vector<sf::Text> messages;
	
	// set the sprites posisiton








	

	//private functions
	void initVariables();
	void initWindow();


	void initText();

	void initButtons();
	void renderText();

	void initPlayers();

	//STRUCTURES - IMPORTANT

	struct {             // Structure declaration
		int myNum;         // Member (int variable)
		string myString;   // Member (string variable)
	} myStructure;

public:


	//constructors / destructors
	Game();
	virtual ~Game();

	//accessors
	const bool running() const;

	//function

	//physics
	/*
	 float velocity = 3;
	 float time = .4;
	 float initialVelocity = 0;
	 float acceleration;
	 */

	//map




	void openCalendar();

	
	void spawnTiles();
	
	void timeStuff();
	
	void cannonFire();
	void cannonRaise();
	void cannonLower();
	void cannonRight();
	void cannonLeft();
	void cannonReload();

	void spawnFlash();


	void spawnBackground1();
	void spawnButton();
	void spawnButton2();
	void spawnButton3();
	

	void spawnMenu();
	void spawnPlayer();
	


	void pollEvents();
	void updateMousePositions();
	void updatePlayersPositions();

	
	void updateButtons();
	



	void updateMessage();

	void updateMenus();
	void updatePlayers();

	void updateFobs();

	void update();


	void renderButtons();

	void renderText2();
	void renderText3();
	//render all text
	void renderAllText();


	void renderMenus();
	


	void render();
};

