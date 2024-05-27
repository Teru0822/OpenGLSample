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
	vector<point> flat;//í∏ì_ç¿ïWÇäiî[
	vector<point> vertex;
};


class Model :public ObjectManager
{
private:
	std::list<std::string> filePassList;

public:
	Model();
	~Model();

	static Objects weapon;
	void addPicturePass(std::string &filePass);
	void LoadingPicture();
	void LoadingVFI();
	
    Objects adjustVFI(const char*);




protected:


};

