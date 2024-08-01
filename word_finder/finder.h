#pragma once


#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <memory>

#include "vector2D.h"
#include "result.h"



class Finder {
	std::string input_file,text;
	std::shared_ptr<std::map<std::string, Vector2D>> words;
	std::shared_ptr<std::vector<std::string>> lines;
public:
	Finder(const char* input_file);
	Result find(std::string word);
	
};