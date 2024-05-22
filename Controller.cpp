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

}

void Controller::BindCallBackFunc()
{
	Keyboard kb;
	kb.BindCallBackFunc();

	Mouse ms;
}

void Controller::keyboard()
{
	
}

void Controller::mouse()
{
}