#pragma once
#include "Game.h"
#define WINDOW_WIDTH 1980
#define WINDOW_HEIGHT 1080


class SceneManager
{
private:

public:
	SceneManager();
	~SceneManager();

	virtual void Init();
	void Update();
	void Draw();
	void BindCallBackFunc() override;

protected:


};

