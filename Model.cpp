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
	this->weapon = Model::adjustVFI("Sample.obj");

}

Objects Model::adjustVFI(const char* filePass)
{
	char str[256];
	Objects obj;
	point p;
	FILE* file;
	fopen_s(&file,filePass,"r");
	while (1)
	{
		fscanf_s(file, "%s", str);

		if (feof(file) != 0)
			break;
		if (strcmp(str, "v") == 0)
		{
			fscanf_s(file, "%f", p.x);
			fscanf_s(file, "%f", p.y);
			fscanf_s(file, "%f", p.z);
			obj.vertex.push_back(p);
		}
		else if (strcmp(str, "vn") == 0)
		{
			fscanf_s(file, "%f", p.x);
			fscanf_s(file, "%f", p.y);
			fscanf_s(file, "%f", p.z);
			obj.flat.push_back(p);
		}
	}

	return obj;
}