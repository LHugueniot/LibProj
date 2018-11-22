#include <iostream>
#include <gtest/gtest.h>
#include <../HairSim/HairSim.h>

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(HairStrand,defaultCtor)
{
    HairStrand h(std::vector<float>(1) , 1 ,4);
    EXPECT_TRUE(&h != nullptr);
}

TEST(HairStrand, getPosition)
{
    HairStrand h(std::vector<float>(1) , 1 ,4);
    EXPECT_TRUE(h.getPosition(1) == glm::vec3(1,1,1));
}

//TEST(HairStrand)
//{

//}
