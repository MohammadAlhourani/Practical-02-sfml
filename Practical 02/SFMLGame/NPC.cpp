#include <NPC.h>

NPC::NPC()
{
	if (!NpcText.loadFromFile("ASSETS\\IMAGES\\OrangeSlime.png"))
	{
		std::cout << "npc image loading failure" << std::endl;
	}

	NpcSprite.setTexture(NpcText);
	NpcSprite.setTextureRect(sf::IntRect(SpritePosX, SpritePosY, 14, 10));

	NpcSprite.setScale(3.0f, 3.0f);

	NpcSprite.setPosition(NpcPosX, NpcPosY);
};
NPC::~NPC(){};

void NPC::initialize()
{
	//cout << "NPC initialize" << endl;
}
void NPC::update()
{
	movement();
	idle();
	//cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow & t_window)
{
	t_window.draw(NpcSprite);
	//cout << "NPC drawing" << endl;
}

void NPC::idle()
{
	if (Timer <= 10)
	{
		Timer++;
	}
	else
	{
		Timer = 0;
	}

	if (Timer % 10 == 0)
	{
		SpritePosX += 15;
	}

	if (SpritePosX >= 30)
	{
		SpritePosX = 0;
	}

	NpcSprite.setTextureRect(sf::IntRect(SpritePosX, SpritePosY, 15, 10));
	
}

void NPC::movement()
{
	NpcPosX -= 0.1f;

	if (NpcPosX <= 0)
	{
		NpcPosX = 800;
	}

	NpcSprite.setPosition(NpcPosX, NpcPosY);
}


