#pragma once
#include "ObjectManager.h"

using namespace std;

struct Objects
{
	vector<GLfloat> flat;//í∏ì_ç¿ïWÇäiî[
	vector<GLfloat> vertex;
	list<int> index;
	int indexSize = 0;
};


class Loading :public ObjectManager
{
private:
	std::list<std::string> filePassList;

public:
	Loading();
	~Loading();

	Objects brick;
	void addPicturePass(std::string &filePass);
	void LoadingPicture();
	void LoadingMaps();
	void LoadingVFI();

	
    void adjustVFI(string,string,string,Objects&);

protected:


};

