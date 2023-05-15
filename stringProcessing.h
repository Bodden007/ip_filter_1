#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


class stringProcessing
{
public:
	std::vector<int> vectIp;
	std::string line;
	std::string stringData;

	stringProcessing(){}

	stringProcessing(std::string inLine)
	{
		line = inLine;		
	}

	~stringProcessing()
	{
		
	}

	std::string parsString();
	int typereplacement(std::string data);
	
	
};

