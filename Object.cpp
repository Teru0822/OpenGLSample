#include "Object.h"

void Object::brickTile(float r, float g, float b, GLuint textureID)
{
    glEnableClientState(GL_VERTEX_ARRAY);//vertex_arrayŽg‚¢‚½‚¢‚È‚ç“ü‚ê‚é
    glEnableClientState(GL_NORMAL_ARRAY);
    glVertexPointer(4, GL_FLOAT, 0, load.brick.vertex.data());
    glBindTexture(GL_TEXTURE_2D, textureID);
    glEnable(GL_TEXTURE_2D);

    glNormalPointer(GL_FLOAT, 0, rengaTile::flat);
    glColor3f(r, g, b);

    for (int i = 0; i < rengaTile::indexSize; i++)
    {
        glBegin(GL_QUADS);
        glNormal3f(rengaTile::flat[i * 3], rengaTile::flat[i * 3 + 1], rengaTile::flat[i * 3 + 2]);
        glTexCoord2d(0.0, 1.0);
        glVertex3f(rengaTile::sortedVertex[i * 12], rengaTile::sortedVertex[i * 12 + 1], rengaTile::sortedVertex[i * 12 + 2]);
        glTexCoord2d(1.0, 1.0);
        glVertex3f(rengaTile::sortedVertex[i * 12 + 3], rengaTile::sortedVertex[i * 12 + 4], rengaTile::sortedVertex[i * 12 + 5]);
        glTexCoord2d(1.0, 0.0);
        glVertex3f(rengaTile::sortedVertex[i * 12 + 6], rengaTile::sortedVertex[i * 12 + 7], rengaTile::sortedVertex[i * 12 + 8]);
        glTexCoord2d(0.0, 0.0);
        glVertex3f(rengaTile::sortedVertex[i * 12 + 9], rengaTile::sortedVertex[i * 12 + 10], rengaTile::sortedVertex[i * 12 + 11]);
        glEnd();
    }
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);

	
}