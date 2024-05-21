#pragma once
#include "ObjectManager.h"

struct RengaTile
{
    GLfloat vertex[ARRAY_MAX];//í∏ì_ç¿ïWÇäiî[
    GLfloat flat[ARRAY_MAX];//í∏ì_ç¿ïWÇäiî[
    GLfloat sortedVertex[ARRAY_MAX];
    GLfloat sortedFlat[ARRAY_MAX];
    int index[ARRAY_MAX];
    int vertexDataSize = 0;
    int flatDataSize = 0;
    int indexSize = 0;
};

class Object : public ObjectManager
{
private:
    RengaTile renga;

public:
    template<typename T>
	void setVFIData(T*, GLfloat, GLfloat, GLfloat);
	void rengaTile(float,float,float,GLuint);
protected:


};

