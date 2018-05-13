#include <iostream>
#include <vector>


bool checkSumEqual(std::vector<int> elements, int rightSum) {
	int leftSum = 0;
	for (auto it = elements.begin(); it != elements.end(); ++it) {
		rightSum -= *it;
		if (leftSum == rightSum) {
			return true;
		}
		leftSum += *it;
	}
	return false;
}

int main() {
	int testNumber;
	std::cin >> testNumber;
	for (int i = 0; i < testNumber; ++i) {
		int elementNumber;
		std::cin >> elementNumber;
		std::vector<int> elements(elementNumber);
		int sum = 0;
		for (int j = 0; j < elementNumber; ++j) {
			int element;
			std::cin >> element;
			sum += element;
			elements[j] = element;
		}
		if (checkSumEqual(elements, sum)) {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
	}
	return 0;
}
