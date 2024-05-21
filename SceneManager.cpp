#include "SceneManager.h"

#include "Scene.h"


SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{

}

void SceneManager::Init()
{
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	Scene scene;
	scene.Init();
}

void SceneManager::Update()
{

}

void SceneManager::Draw()
{
	Scene scene;
	scene.Draw();
}
