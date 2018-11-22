#include "HairSim.h"
#include <fstream>
#include <streambuf>

HairStrand::HairStrand(vector<float> AnchorPos, int m_length, int m_space)
{
    cout<<"object is being created";
}

HairStrand::~HairStrand()
{
	cout<<"object is being destroyed";
}

void HairStrand::Sim()
{

}

glm::vec3 HairStrand::getPosition(int m_linkNum)
{
    return glm::vec3(1,1,1);
}

void HairStrand::ReadHair(std::string file){
    std::ifstream t(file.c_str());
    std::string fileData((std::istreambuf_iterator<char>(t)),
                     std::istreambuf_iterator<char>());
    std::cout<<fileData;


}
