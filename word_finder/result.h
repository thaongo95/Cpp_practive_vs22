#pragma once
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <iostream>

#include "vector2D.h"


class Result {
	std::string text;
	std::shared_ptr<std::map<std::string, Vector2D>> words;
	std::shared_ptr<std::vector<std::string>> lines;
public:
	Result(std::string text, std::shared_ptr<std::map<std::string, Vector2D>>& words,
		std::shared_ptr<std::vector<std::string>>& lines);
	void print();
};