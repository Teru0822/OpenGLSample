#include "Loading.h"

Loading::Loading()
{
	filePassList.push_back("vData.txt");
	filePassList.push_back("fData.txt");
	filePassList.push_back("iData.txt");
	filePassList.push_back("v2Data.txt");
	filePassList.push_back("f2Data.txt");
	filePassList.push_back("i2Data.txt");
	filePassList.push_back("v4Data.txt");
	filePassList.push_back("f4Data.txt");
	filePassList.push_back("i4Data.txt");
	filePassList.push_back("vRengaTile.txt");
	filePassList.push_back("fRengaTile.txt");
	filePassList.push_back("iRengaTile.txt");
	filePassList.push_back("vGround.txt");
	filePassList.push_back("fGround.txt");
	filePassList.push_back("iGround.txt");
	filePassList.push_back("vBack.txt");
	filePassList.push_back("fBack.txt");
	filePassList.push_back("iBack.txt");
	filePassList.push_back("vWeapon.txt");
	filePassList.push_back("fWeapon.txt");
	filePassList.push_back("iWeapon.txt");
	filePassList.push_back("vBall.txt");
	filePassList.push_back("fBall.txt");
	filePassList.push_back("iBall.txt");
}

Loading::~Loading()
{

}

void Loading::addPicturePass(std::string &filePass)
{
	filePassList.push_back(filePass);
}

void Loading::LoadingPicture()
{

}