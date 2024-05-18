#include "Scene.h"
#define WARP_WIDTH 900
#define WARP_HEIGHT 500
Scene::Scene()
{

}

Scene::~Scene()
{

}

void Scene::Init()
{
	glutCreateWindow("Sample");
	glutWarpPointer(WARP_WIDTH, WARP_HEIGHT);
	glutSetCursor(GLUT_CURSOR_NONE);
	lookingPos = { 0.0,0.0,0.0 };
}

void Scene::translateLookingPos(double x,double y,double z)
{
	lookingPos = { x,y,z };
}

void Scene::Update()
{

}