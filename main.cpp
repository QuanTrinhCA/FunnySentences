#include <iostream>
#include <vector>
#include <string>
#include <math.h>

std::vector<int> inputNum(int m)					//get number inputs
{
	std::vector<int> numInput (m);
	for (int i = 0; i < m; i++)
	{
		std::cin >> numInput[i];
		std::cin.ignore();
	}
	return numInput;
}

std::vector<std::string> inputWord(int m)			//get string inputs
{
	std::vector<std::string> wordInput (m);
	for (int i = 0; i < m; i++)
	{
		std::getline (std::cin, wordInput[i]);
	}
	return wordInput;
}

int randomNumGen9000(int a, int b, int m, int n)
{
	return fmod((a * n + b), m);
}

int printOutput(std::vector<int> numInputs, std::vector<std::vector<std::string>> wordInputs, int n)
{
	for (int i = 0; i < 4; i++)
	{
		n = randomNumGen9000(numInputs[0], numInputs[1], numInputs[2], n);
		if (i == 3)
		{
			std::cout << wordInputs[i][n] << ".\n";
		} else
		{
			std::cout << wordInputs[i][n] << " ";
		}
	}
	return n;
}

int main()
{
	std::cout << "Please enter the inputs:\n";

	std::vector<int> numInputs { inputNum(3) };
	std::vector<std::vector<std::string>> wordInputs (numInputs[2]);

	for (int i = 0; i < 4; i++) 
	{
		wordInputs[i] = inputWord(numInputs[2]);
	}

	int n{ 1 };
	for (int i = 0; i < numInputs[2]; i++)
	{
		n = printOutput(numInputs, wordInputs, n);
	}

	std::cout << "Please press enter to exit...";
	std::getchar();

	return EXIT_SUCCESS;
}