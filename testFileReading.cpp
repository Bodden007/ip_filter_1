#include "testFileReading.h"

void testFileReading::fileReading()
{
	std::string line;
	std::string inFile = "ip_filter.tsv";
	std::ifstream in;
	
	in.open(inFile);
	std::streambuf* cinbuf = std::cin.rdbuf();
	std::cin.rdbuf(in.rdbuf());

	if (in.is_open())
	{
		std::cout << "Файл прочитан" << std::endl;

		while (std::getline(std::cin, line))
		{
			inData.push_back(line);
		}
	}
	else
	{
		std::cout << "файл не найден" << std::endl;
	}

	in.close();
	
}
