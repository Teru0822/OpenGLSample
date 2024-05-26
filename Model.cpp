#include "Model.h"



Model::Model()
{

}

Model::~Model()
{

}

void Model::addPicturePass(std::string &filePass)
{
	filePassList.push_back(filePass);
}

void Model::LoadingPicture()
{

}

void Model::LoadingVFI()
{
	this->brick = Model::adjustVFI("Sample.obj");

}

Objects Model::adjustVFI(const char* filePass)
{
	char str[256];
	Objects obj;
	point p;
	FILE* file;
	file = fopen(filePass, "rt");
	while (1)
	{
		fscanf(file, "%s", str);

		if (feof(file) != 0)
			break;
		if (strcmp(str, "v") == 0)
		{
			fscanf(file, "%f", p.x);
			fscanf(file, "%f", p.y);
			fscanf(file, "%f", p.z);
			obj.vertex.push_back(p);
		}
		else if (strcmp(str, "vn") == 0)
		{
			fscanf(file, "%f", p.x);
			fscanf(file, "%f", p.y);
			fscanf(file, "%f", p.z);
			obj.flat.push_back(p);
		}
	}

	return obj;
}