#pragma once
#include "SceneManager.h"

class Scene : public SceneManager
{
private:
	Position lookingPos;


public:
	Scene();
	~Scene();

	void Init();
	void translateLookingPos(double x,double y,double z);
	void Update();
	void Draw() ;
};

