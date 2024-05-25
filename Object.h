#pragma once
#include "ObjectManager.h"
#include "Model.h"


class Object : public Game
{
private:

public:
	static GLuint loadTexture(const char* path);
	static void brickTile(float,float,float);
protected:


};

