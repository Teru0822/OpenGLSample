#pragma once
#include "ObjectManager.h"

using namespace std;

struct Objects
{
	vector<GLfloat> flat;//���_���W���i�[

	//�I�[�o�[�t���[�̌���
	GLfloat vertex[ARRAY_MAX];
	list<int> index;
	int indexSize = 0;
};


class Loading :public ObjectManager
{
private:
	std::list<std::string> filePassList;
	Objects brick;

public:
	Loading();
	~Loading();

	void addPicturePass(std::string &filePass);
	void LoadingPicture();
	void LoadingVFI();
	
    Objects adjustVFI(string,string,string);

protected:


};

