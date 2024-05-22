#include "Loading.h"



Loading::Loading()
{
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

void Loading::LoadingVFI()
{
	adjustVFI("vBrickTile.txt","fBrickTile.txt","iBrickTile.txt", this->brick);
}

void Loading::adjustVFI(string v,string f,string i,Objects& obj)
{
	ifstream readV(v),readF(f),readI(i);
	if (readV.is_open() && readF.is_open() && readI.is_open())
	{
		list<GLfloat> vertex;

		string v_line;
		while (getline(readV, v_line))
		{
			string token;
			istringstream iss(v_line);		
			float x, y, z;

			if (iss >> x && iss.ignore(1, ',') >> y && iss.ignore(1, ',') >> z) {
				vertex.push_back(x);
				vertex.push_back(y);
				vertex.push_back(z);
			}
			else {
				std::cerr << "Failed to parse line " << std::endl;
			}
		}
		string f_line;
		while (getline(readF, f_line))
		{
			string token;
			istringstream iss(f_line);
			float x, y, z;

			if (iss >> x && iss.ignore(1, ',') >> y && iss.ignore(1, ',') >> z) {
				obj.flat.push_back(x);
				obj.flat.push_back(y);
				obj.flat.push_back(z);
			}
			else {
				std::cerr << "Failed to parse line " << std::endl;
			}
		}
		string i_line;
		while (getline(readI, i_line))
		{
			string token;
			istringstream iss(i_line);
			int a, b, c,d;
			if (iss >> a && iss.ignore(1, ',') >> b && iss.ignore(1, ',') >> c && iss.ignore(1,',') >> d) {
				obj.index.push_back(a);
				obj.index.push_back(b);
				obj.index.push_back(c);
				obj.index.push_back(d);
				obj.indexSize++;
			}
			else {
				std::cerr << "Failed to parse line " << std::endl;
			}
		}
		auto it = obj.index.begin();

		//‚±‚±‚â‚Î‚¢
#pragma omp parallel for
		for (int i = 0; i < obj.indexSize * 4; i++)
		{
			auto vertexIt = vertex.begin();
			std::advance(vertexIt, *it * 3);
			obj.vertex.push_back(*vertexIt++);
			obj.vertex.push_back(*vertexIt++);
			obj.vertex.push_back(*vertexIt++);
			++it;	
		}
	}
	else
	{
		std::cerr << "error" << std::endl;
	}

}