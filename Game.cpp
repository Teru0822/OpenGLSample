#include "Game.h"

#include "ObjectManager.h"
#include "SceneManager.h"
#include "Model.h"
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
	sceneManager.create("Sample");
	
	Model model;
	model.LoadingVFI();
	model.LoadingPicture();

}

void Game::Update()
{
	Controller controller;
}

void Game::Draw()
{
	SceneManager sceneManager;
	sceneManager.Init();

	glutMainLoop();

	sceneManager.Uninit();
}

void Game::BindCallBackFunc()
{
	SceneManager sceneManager;
	sceneManager.BindCallBackFunc();

	Controller controller;
	controller.BindCallBackFunc();


}