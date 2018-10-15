#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();
	void initialize();
	void update();
	void draw(sf::RenderWindow & t_window);
	void hit();
	void idle();

	sf::Sprite playerSprite;
private:

	
	sf::Texture playerText;

	int spritePosX = 0;
	int spritePosY = 0;

	float playerPosX = 0;
	float playerPosY = 300;
};
#endif