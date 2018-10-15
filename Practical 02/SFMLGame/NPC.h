#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"

using namespace std;

class NPC : public Character
{
public:
	NPC();
	~NPC();
	void initialize();
	void update();
	void draw(sf::RenderWindow & t_window);
	void idle();
	void movement();

	sf::Sprite NpcSprite;
private:

	
	sf::Texture NpcText;

	int SpritePosX = 0;
	int SpritePosY = 0;

	float NpcPosX = 800;
	float NpcPosY = 350;

	int Timer = 0;
};
#endif