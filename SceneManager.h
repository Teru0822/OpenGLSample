#pragma once
#include "Game.h"
#define WINDOW_WIDTH 1980
#define WINDOW_HEIGHT 1080


class SceneManager : public Game
{
private:

public:
	SceneManager();
	~SceneManager();

	void Init();
	void Update();
	void Draw();
	
protected:


};

