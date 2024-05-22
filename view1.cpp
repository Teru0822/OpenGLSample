#include "view1.h"

void view1::view(int x, int y, int w, int h)
{
	glViewport(x, y, w, h);
	float lightposMat[] = { 0,4,4,0 };
	float diffuse[] = { 0.1,0.1,0.1,1 };
	float specular[] = { 0.3,0.3,0.3,0.3 };
	float ambient[] = { 0.2,0.2,0.2,0.5 };
	float diffuseMat[] = { 0.9,0.9,0.9,1 };
	float specularMat[] = { 0.5,0.5,0.5,1 };
	float ambientMat[] = { 0.24725,0.1995,0.0745,1 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightposMat);  // ŒõŒ¹‚ÌˆÊ’u
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);

}