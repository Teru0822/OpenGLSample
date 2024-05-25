#pragma once
#include "ObjectManager.h"

using namespace std;

struct Objects
{
	vector<GLfloat> flat;//���_���W���i�[

	//�I�[�o�[�t���[�̌���
	list<GLuint> vertex;
	list<int> index;
	int indexSize = 0;
};


class Model :public ObjectManager
{
private:
	std::list<std::string> filePassList;
	Objects brick;

public:
	Model();
	~Model();

	void addPicturePass(std::string &filePass);
	void LoadingPicture();
	void LoadingVFI();
	
    Objects adjustVFI(string,string,string);

protected:


};

