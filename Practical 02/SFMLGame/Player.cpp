#include <Player.h>

Player::Player()
{
	if (!playerText.loadFromFile("ASSETS\\IMAGES\\Samurai.png"))
	{
		std::cout << "failure loading player image" << std::endl;
	}

	playerSprite.setTexture(playerText);
	playerSprite.setTextureRect(sf::IntRect(spritePosX, spritePosY, 30, 35));

	playerSprite.setScale(3.0f, 3.0f);

	playerSprite.setPosition(playerPosX, playerPosY);
};
Player::~Player(){};

void Player::initialize()
{
	//cout << "Player initialize" << endl;
}
void Player::update()
{
	
	//cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow & t_window)
{
	t_window.draw(playerSprite);
}

void Player::hit()
{
	spritePosX = 210;
	spritePosY = 210;

	playerSprite.setTextureRect(sf::IntRect(spritePosX, spritePosY, 30, 35));
}

void Player::idle()
{
	spritePosX = 0;
	spritePosY = 0;

	playerSprite.setTextureRect(sf::IntRect(spritePosX, spritePosY, 30, 35));
}


