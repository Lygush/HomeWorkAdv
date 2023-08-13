#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers{ 4, 7, 9, 14, 12 };
	for (auto& i : numbers) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	auto func = [&numbers]() {
		for (auto& i : numbers) {
			if (i % 2 != 0) {
				i *= 3;
			}
			std::cout << i << " ";
		}
	};
	func();
}

