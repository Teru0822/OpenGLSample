#pragma once
#include "Game.h"
#define WINDOW_WIDTH 1980
#define WINDOW_HEIGHT 1080

#include "string"

class SceneManager
{
private:

public:
	SceneManager();
	~SceneManager();

	void create(std::string windowName);
	void Update();
	void Draw();
	void BindCallBackFunc();
	void Init();
	void Uninit();




protected:


};

