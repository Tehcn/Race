#ifndef FILE_H
#define FILE_H

#include <fstream>
#include "general.h"

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

std::string readFile(std::string fn) {
	// result
	std::string s;
	// file stream for reading
	std::ifstream fs(const_cast<char*>(fn.c_str()));
	std::getline(fs, s, '\0');
	// close the file stream
	fs.close();
	return s;
}

#endif