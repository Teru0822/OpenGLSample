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
	float lightposMat[] = { 0 , 4, 4, 0 };
	float diffuse[] = { 0.5,0.5,0.5,0.5 };
	float specular[] = { 0.3,0.3,0.3,0.3 };
	float ambient[] = { 0.2,0.2,0.2,0.5 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightposMat);  // åıåπÇÃà íu
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);


	glShadeModel(GL_SMOOTH);
	glEnable(GL_COLOR_MATERIAL);//êFÇóLå¯âª
	glEnable(GL_COLOR_MATERIAL_FACE);
	glEnable(GL_LIGHT0);

}

void SceneManager::Uninit()
{
	glDisable(GL_LIGHT0);
	glDisable(GL_COLOR_MATERIAL_FACE);
	glDisable(GL_COLOR_MATERIAL);

}

void SceneManager::create(std::string windowName)
{
	const char* strName = windowName.c_str();
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow(strName);
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
