#include "result.h"

Result::Result(std::string text, std::shared_ptr<std::map<std::string, Vector2D>>& words,
	std::shared_ptr<std::vector<std::string>>& lines):
	text{text}, 
	words{words}, 
	lines{lines}
{
}

void Result::print()
{
	std::cout << "\"" << text << "\"" << " occur " << (*words)[text].number
		<< (((*words)[text].number) ? " times" : " time") << std::endl;
	for (auto line_num : (*words)[text].line_nums) {
		std::cout << "Line " << line_num << " : " << (*lines)[line_num] << std::endl;
	}
}
