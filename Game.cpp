#include "Game.h"

#include "ObjectManager.h"
#include "SceneManager.h"
#include "Loading.h"
#include "Controller.h"

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

	Controller controller;
	controller.Init();
}

void Game::Update()
{
	Controller controller;

}

void Game::Draw()
{
	SceneManager sceneManager;
	sceneManager.Draw();

	glutMainLoop();
}