#include "finder.h"
#include "result.h"

int main() {
	Finder finder("input.txt");
	auto result = finder.find("they");
	result.print();
}