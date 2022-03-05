#ifndef LEXER_H
#define LEXER_H

#include "general.h"
#include "keywords.h"
#include <vector>
#include <sstream>
#include <iostream>

typedef std::vector<std::vector<std::string>> lexer_result;
typedef std::vector<std::string> lexer_item;

// Every element is an identifier which
// has both the type of the identifier
// and it's name
// The result is from top to bottom (duh)
lexer_result lexer(std::string s) {
	lexer_result r;

	std::istringstream ss(s);

	std::string l;
	while(std::getline(ss, l, ';')) {
		// now we have each line of code
		std::cout << s << std::endl;
	}

	return r;
}

void add_lexer_item(lexer_result* r, lexer_item i) {
	
}

#endif