#include "Controller.h"

#include "Keyboard.h"
#include "Mouse.h"


Controller::Controller()
{

}

Controller::~Controller()
{

}

void Controller::Init()
{
	glutKeyboardFunc(Controller::keyboard);

}

void Controller::keyboard(unsigned char key,int x,int y)
{
	Keyboard kb;
	
}

void Controller::mouse()
{
	Mouse ms;
}