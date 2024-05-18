#include "SceneManager.h"

#include "Scene.h"

#define WINDOW_WIDTH 1980
#define WINDOW_HEIGHT 1080

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

}
