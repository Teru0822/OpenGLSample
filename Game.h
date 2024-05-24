#pragma once
#include <GL/freeglut.h>
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <omp.h>

class Game
{
private:
	
public:
	Game();
	~Game();

	struct Position
	{
		double x;
		double y;
		double z;
	};

	virtual void BindCallBackFunc();
	virtual void Init(int argc, char** argv);
	void Update();	
	void Draw();

};

