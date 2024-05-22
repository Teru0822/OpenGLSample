#include "ViewManager.h"

#include "view1.h"
void ViewManager::View()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);   /* âÊñ Çè¡ãé */
	glMatrixMode(GL_MODELVIEW);
	float lightposMat[] = { 0 ,  4, 4, 0 };
	float diffuse[] = { 0.5,0.5,0.5,0.5 };
	float specular[] = { 0.3,0.3,0.3,0.3 };
	float ambient[] = { 0.2,0.2,0.2,0.5 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightposMat);  // åıåπÇÃà íu
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);

	glEnable(GL_DEPTH_TEST);	//âúçsÇ´Çí«â¡
	glPushMatrix();

	view1::view(0,0,WINDOW_WIDTH,WINDOW_HEIGHT);

	glPopMatrix();
	glDisable(GL_DEPTH_TEST);

	//view2();


	glutSwapBuffers();
}

