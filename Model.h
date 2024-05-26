#pragma once
#include "ObjectManager.h"


using namespace std;

struct point
{
	double x;
	double y;
	double z;
};

struct Objects
{
	vector<point> flat;//���_���W���i�[
	vector<point> vertex;
	

	//�I�[�o�[�t���[�̌���
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
	
    Objects adjustVFI(const char*);

protected:


};

