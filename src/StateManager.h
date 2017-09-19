#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
#include <memory>

#include "GameState.h"
#include "StartState.h"
#include "PlayState.h"
#include "utils.h"

using namespace sf;


class StateManager
{
private:

	// reference to the window
	sf::RenderWindow &mainWindow;
	View mainView;

	unsigned int currentState;

	// list of states.
	std::array<GameState*, 4> states = {};

	Texture texture;
	Sprite sprite;
	bool previousKeyState;

	sf::Font mainFont;

	Text testText;

	void InitialiseStates();
public:
	StateManager(sf::RenderWindow &wind);
	~StateManager();

	int LoadGamefiles();
	void Update(const float& dt);
	void Render();

	void Click(utils::stateType &choice);

};