#pragma once
#include "ObjectManager.h"
#include "Loading.h"


class Object : public ObjectManager
{
private:

public:
	static GLuint loadTexture(const char* path);
	static void brickTile(float,float,float);
protected:


};

