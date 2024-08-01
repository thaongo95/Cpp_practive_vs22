#pragma once
#include <set>
struct Vector2D {
	size_t number{ 0 };
	std::set<size_t> line_nums;
	// number of word in file
	//  number of line that word occur
};