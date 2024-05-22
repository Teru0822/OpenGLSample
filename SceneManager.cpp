#include "SceneManager.h"

#include "ViewManager.h"
#define WARP_WIDTH 900
#define WARP_HEIGHT 500


SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{

}

void SceneManager::Init()
{

	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("Sample");
	glutWarpPointer(WARP_WIDTH, WARP_HEIGHT);
	glutSetCursor(GLUT_CURSOR_NONE);


}

void SceneManager::Update()
{

}

void SceneManager::Draw()
{

}

void SceneManager::BindCallBackFunc()
{
	glutDisplayFunc(ViewManager::View);
}
