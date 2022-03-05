#include <iostream>

#include "general.h"
#include "lexer.h"
#include "file.h"

int main(void) {
	std::string file = "";
	std::cout << "Filename: ";
	std::cin >> file;
	std::cout << "Compiling " << file << std::endl;
	std::string s = readFile(file);
	lexer(s);
	return 0;
}
