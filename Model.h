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
	vector<point> flat;//頂点座標を格納
	vector<point> vertex;
	

	//オーバーフローの原因
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

