#pragma once
#include "ObjectManager.h"

class Loading :public ObjectManager
{
private:
	std::list<std::string> filePassList;

public:
	Loading();
	~Loading();

	void addPicturePass(std::string &filePass);
	void LoadingPicture();
	void LoadingMaps();



protected:


};

