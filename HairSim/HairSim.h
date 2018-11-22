#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <array>
#include <vector>
#include <gtest/gtest.h>
#include <string>
#include <glm/glm.hpp>

using namespace std;

struct HairSeg
{
	float posx, posy, posz;
	int m_space;
};

class HairStrand {

	public:
        HairStrand(vector<float> AnchorPos, int m_length, int m_space);
		~HairStrand();
        glm::vec3 getPosition(int m_linkNum);
        void Sim();
        void ReadHair(std::string file);
		int length;
		vector<HairSeg> m_HairStrand;
};

class Hair: public HairStrand {
    public:
        void Sim();
        vector<HairStrand> m_headOfHair;
};
