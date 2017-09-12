#include "GameState.h"

void GameState::Render(RenderWindow &window) const
{
	std::cout << "render gs.cpp" << std::endl;
	// for each game object. Render
	for(GameObject* go : stateObjects)
	{
		go->Render(window);
	}

	//stateObjects[0]->Render(window);

}

void GameState::AddObject(const GameObject &go)
{
	//stateObjects.push_back(&go);
}