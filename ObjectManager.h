#pragma once
#include "Game.h"
#define ARRAY_MAX 10000000

class ObjectManager : public Game
{
private:

public:
	ObjectManager();
	~ObjectManager();
	void Init();
	void Update();
	void Draw();
};

