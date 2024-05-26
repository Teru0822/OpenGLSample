#include "Object.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


//void Object::brickTile(float r, float g, float b)
//{
//    Model load;
//    //Objects brick = load.adjustVFI("vBrickTile.txt", "fBrickTile.txt", "iBrickTile.txt");
//
//    Objects brick;
//    const char* imagePath = "brick.png";
//    GLuint textureID = Object::loadTexture(imagePath);
//    glEnableClientState(GL_VERTEX_ARRAY);//vertex_array使いたいなら入れる
//    glEnableClientState(GL_NORMAL_ARRAY);
//    glVertexPointer(4, GL_FLOAT, 0, brick.vertex);
//    glBindTexture(GL_TEXTURE_2D, textureID);
//    glEnable(GL_TEXTURE_2D);
//
//    glNormalPointer(GL_FLOAT, 0, brick.flat.data());
//    glColor3f(r, g, b);
//    auto flatIt = brick.flat.begin();
//    for (int i = 0; i < brick.indexSize; i++)
//    {
//        glBegin(GL_QUADS);
//        glNormal3f(*flatIt, *flatIt + 1, *flatIt + 2);
//        glTexCoord2d(0.0, 1.0);
//        glVertex3f(brick.vertex[i * 12], brick.vertex[i * 12 + 1], brick.vertex[i * 12 + 2]);
//        glTexCoord2d(1.0, 1.0);
//        glVertex3f(brick.vertex[i * 12 + 3], brick.vertex[i * 12 + 4], brick.vertex[i * 12 + 5]);
//        glTexCoord2d(1.0, 0.0);
//        glVertex3f(brick.vertex[i * 12 + 6], brick.vertex[i * 12 + 7], brick.vertex[i * 12 + 8]);
//        glTexCoord2d(0.0, 0.0);
//        glVertex3f(brick.vertex[i * 12 + 9], brick.vertex[i * 12 + 10],brick.vertex[i * 12 + 11]);
//        glEnd();
//        flatIt++;
//    }
//    glBindTexture(GL_TEXTURE_2D, 0);
//    glDisable(GL_TEXTURE_2D);
//
//	
//}

GLuint Object::loadTexture(const char* path) {
    GLuint textureID;
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);

    // テクスチャパラメータの設定
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    int width, height, nrChannels;
    unsigned char* data = stbi_load(path, &width, &height, &nrChannels, 0);
    if (data) {
        GLenum format;
        if (nrChannels == 1)
            format = GL_RED;
        else if (nrChannels == 3)
            format = GL_RGB;
        else if (nrChannels == 4)
            format = GL_RGBA;

        // テクスチャ画像をバインドする
        glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);

        // 手動でミップマップを生成する
        gluBuild2DMipmaps(GL_TEXTURE_2D, format, width, height, format, GL_UNSIGNED_BYTE, data);
    }
    stbi_image_free(data);
    glBindTexture(GL_TEXTURE_2D, 0);

    return textureID;
}

