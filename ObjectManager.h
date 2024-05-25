#pragma once
#include "Game.h"
#define ARRAY_MAX 10000000

class ObjectManager
{
private:

public:
	ObjectManager();
	~ObjectManager();
	virtual void Init();
	void Update();
	void Draw();
};

