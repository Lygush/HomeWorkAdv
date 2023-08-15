#include <iostream>
#include <vector>
#include  <algorithm>

int main()
{
	std::vector<int> numbers{ 4, 7, 9, 14, 12, 9 };
	std::for_each(numbers.begin(), numbers.end(), [](const auto& i) {std::cout << i << " "; });
	std::cout << std::endl;
	std::for_each(numbers.begin(), numbers.end(), [](const auto& i) {(i % 2 != 0) ? std::cout << i * 3 << " " : std::cout << i << " "; });
}

