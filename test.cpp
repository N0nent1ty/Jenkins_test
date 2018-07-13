#include <iostream>
#include <cmath>
#include <gtest/gtest.h>
using namespace std;

TEST (tgammaTest, HandlePasitiveINput)
{
	EXPECT_EQ(tgamma(0),1);
	EXPECT_EQ(tgamma(1),1);
	EXPECT_EQ(tgamma(2),2);
}


int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	for(int i=0;i!=10;i++)
		cout<<std::tgamma(i)<<endl;
	return RUN_ALL_TESTS();
}

