#pragma once
#include "ObjectManager.h"
#include "Loading.h"


class Object : public ObjectManager
{
private:
	Loading load;

public:


	void brickTile(float,float,float,GLuint);
protected:


};

