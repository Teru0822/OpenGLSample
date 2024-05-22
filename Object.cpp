#include "Object.h"

void Object::brickTile(float r, float g, float b, GLuint textureID)
{
    glEnableClientState(GL_VERTEX_ARRAY);//vertex_arrayŽg‚¢‚½‚¢‚È‚ç“ü‚ê‚é
    glEnableClientState(GL_NORMAL_ARRAY);
    glVertexPointer(4, GL_FLOAT, 0, load.brick.vertex.data());
    glBindTexture(GL_TEXTURE_2D, textureID);
    glEnable(GL_TEXTURE_2D);

    glNormalPointer(GL_FLOAT, 0, load.brick.flat.data());
    glColor3f(r, g, b);
    auto flatIt = load.brick.flat.begin();
    auto vertexIt = load.brick.vertex.begin();
    for (int i = 0; i < load.brick.indexSize; i++)
    {
        glBegin(GL_QUADS);
        glNormal3f(*flatIt, *flatIt + 1, *flatIt + 2);
        glTexCoord2d(0.0, 1.0);
        glVertex3f(*vertexIt,*vertexIt+1,*vertexIt+2);
        glTexCoord2d(1.0, 1.0);
        glVertex3f(*vertexIt+3, *vertexIt+4, *vertexIt+5);
        glTexCoord2d(1.0, 0.0);
        glVertex3f(*vertexIt+6, *vertexIt+7, *vertexIt+8);
        glTexCoord2d(0.0, 0.0);
        glVertex3f(*vertexIt+9, *vertexIt+10, *vertexIt+11);
        glEnd();
        flatIt++;
        vertexIt += 12;

    }
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);

	
}