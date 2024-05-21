#include "Keyboard.h"

Keyboard::Keyboard()
{

}

Keyboard::~Keyboard()
{

}

void Keyboard::Init()
{
	glutKeyboardFunc(Keyboard::kbDown);
	glutKeyboardUpFunc(Keyboard::kbUp);

}

void Keyboard::kbDown(unsigned char key , int x, int y)
{
	if (key == 0x1b)
		exit(0);

}

void Keyboard::kbUp(unsigned char key, int x, int y)
{

}

void Keyboard::spe_kbDown()
{

}

void Keyboard::spe_kbUp()
{

}