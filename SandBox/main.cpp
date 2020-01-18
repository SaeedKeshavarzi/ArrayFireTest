#include "sbox_pch.h"

int main(int argc, char** argv)
{
	INIT();

	af::array ipic = af::loadImage(R"_(D:\GitProjects\MesbahClustering\MesbahClusteringMatlab\quantize\skeleton\crowd.bmp)_");
	std::cout << ipic.dims(0) << std::endl;
	std::cout << ipic.dims(1) << std::endl;

	FINISH(0);
}
