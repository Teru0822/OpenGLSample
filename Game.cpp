#include "Game.h"

#include "ObjectManager.h"
#include "SceneManager.h"
#include "Loading.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::Init(int argc,char **argv)
{
	glutInit(&argc,argv);
	SceneManager sceneManager;
	sceneManager.Init();
	
	Loading load;
	load.LoadingPicture();
}

void Game::Update()
{

}

void Game::Draw()
{

}