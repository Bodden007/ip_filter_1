#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ranges>
#include <algorithm>

#include "testFileReading.h"
#include "stringProcessing.h"


void ioRes(std::vector <std::vector <int>> &ipAdress, int p)
{
	std::cout << ipAdress[p][0] << "." << ipAdress[p][1] << "."
		<< ipAdress[p][2] << "." << ipAdress[p][3] << std::endl;
}

int main()
{
	std::vector <std::vector <int>> ipAdress;
	std::string buffer;

	// Testing programs, reading in a file
	// To read from a file, uncomment the Begin 1 - End 1 section
	// Begin 1
	
	//testFileReading testRead;
	//testRead.fileReading();
	//for (int i = 0; i < 1000; i++)
	//{
	//	buffer = testRead.inData[i];
	//	stringProcessing stProc = stringProcessing(buffer);
	//	stProc.parsString();
	//	ipAdress.push_back(stProc.vectIp);
	//}
	
	// End 1

	//To read from standard input, uncomment the Begin 2 - End 2 section
	// 
	// Begin 2

	for (int i = 0; i < 1000; i++)
	{
		std::cout << "Введите ip adress: " << std::endl;
		std::getline(std::cin, buffer);
		stringProcessing stProc = stringProcessing(buffer);
		stProc.parsString();
		ipAdress.push_back(stProc.vectIp);
	}

	// End 2


	std::ranges::sort(ipAdress, std::ranges::greater());

	for (int i = 0; i < ipAdress.size(); i++)
	{
		ioRes(ipAdress, i);
	}

	for (int i = 0; i < ipAdress.size(); i++)
	{
		if (ipAdress[i][0] == 1)
			ioRes(ipAdress, i);
	}

	for (int i = 0; i < ipAdress.size(); i++)
	{
		if ((ipAdress[i][0] == 46) && (ipAdress[i][1] == 70))
			ioRes(ipAdress, i);
	}

	for (int i = 0; i < ipAdress.size(); i++)
	{
		if ((ipAdress[i][0] == 46) || (ipAdress[i][1] == 46) || (ipAdress[i][2] == 46) || (ipAdress[i][3] == 46))
			ioRes(ipAdress, i);
	}
	
}