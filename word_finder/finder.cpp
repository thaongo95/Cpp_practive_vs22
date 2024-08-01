#include "finder.h"


Finder::Finder(const char* input_file) 
	:input_file{ input_file },
	words{std::make_shared<std::map<std::string, Vector2D>>()},
	lines{std::make_shared<std::vector<std::string>>()}
{
	std::ifstream fin(input_file);
	std::string line;	
	while (std::getline(fin, line)) {
		lines->push_back(line);
		std::istringstream str_in(line);
		std::string word;
		while (str_in >> word) {
			(*words)[word].number++;
			(*words)[word].line_nums.insert(lines->size()-1);
		}
	}
}

Result Finder::find(std::string word)
{
	return Result(word, words, lines);
}

