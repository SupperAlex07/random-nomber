#include <iostream>
#include <random>

int main() {
	std::random_device rd;
	std::mt19937 gen(rd());

	int A, B;
	std::cin >> A >> B;

	std::uniform_int_distribution<> dis(A, B);

	int random_number = dis(gen);

	std::cout << random_number << std::endl;

	return 0;
}
// gmesr;gjseijgoiogersogpiorens