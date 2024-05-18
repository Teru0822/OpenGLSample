#pragma once
#include <GL/freeglut.h>
#include <list>
#include <string>


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


	void Init(int argc, char** argv);
	void Update();	
	void Draw();

};

