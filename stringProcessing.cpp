#include "stringProcessing.h"

std::string stringProcessing::parsString()
{
	char check = '.';
	int point = 0;

		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == check)
			{
				point++;
			}
		}

		if (point == 3)
		{
			line += ":";
			
			for (int i = 0; i < line.size(); i++)
			{
				if (line[i] != check)
				{
					if (line[i] == ':')
					{
						line.clear();
						int addressBlock = typereplacement(stringData);
						
						vectIp.push_back(addressBlock);
						stringData.clear();
						break;
					}
					stringData += line[i];
				}
				else
				{
					int addressBlock = typereplacement(stringData);

					// убрать
					vectIp.push_back(addressBlock);
					//

					stringData.clear();
				}
			}

			point = 0;
		}
		else
		{
			line.clear();
		}
		
	return line;
}

int stringProcessing::typereplacement(std::string data)
{
	int intData = 0;
	std::stringstream str;
	str << data;
	str >> intData;
	return intData;	
}
