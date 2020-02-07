#include <string>
#include <iostream>
#include <fstream>

std::ifstream GetFile();


int main() {
	

	GetFile();
}
std::ifstream GetFile()
{
	std::string filename;
	std::cout << "Please enter the name of the input file. ";
	std::cin >> filename;

	std::ifstream file;
	std::string   text;

	file.open(filename);
	if (!file.is_open()) {
		std::cout << "Failed to open file: " << filename << "." << std::endl;
	}

	file >> text;
	file.close();

	return file;
}