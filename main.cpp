#include <vector>
#include "Game.h"

int main(int argc ,char **argv)
{
	Game game;
	game.Init(argc,argv);
	game.BindCallBackFunc();
	game.Draw();

	return 0;
}