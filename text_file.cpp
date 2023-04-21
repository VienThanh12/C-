#include <iostream>
#include <fstream>
#include <string>
#include "E3_functions.h"

int main()
{
	int total_char = 0;
	int total_lines = 0;

	std::string line;
	std::ifstream in_file("example_file.txt");

	if (in_file.is_open()) {
		while (std::getline(in_file, line)) {
			total_char += line.length();
			total_lines++;
		}

		in_file.close();

		std::cout << "Line count: " << total_lines << std::endl;
		std::cout << "Character count: " << total_char << std::endl;
		std::cout << "Average line length: " << calcAverageLine(total_lines, total_char) << std::endl;
	}

	combineAllRows();
}

double calcAverageLine(int& line_count, int& total_char) 
{
	return (double)total_char / line_count;
}

void combineAllRows() 
{
	std::ifstream in_file("example_file.txt");
	std::ofstream out_file("new_file.txt");

	std::string readline;

	if (in_file.is_open()) {
		while (std::getline(in_file, readline)) {
			out_file << readline;
		}
	}
	in_file.close();
	out_file.close();
}

