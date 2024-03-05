#include <iostream>

int main()
{
	double a{};
	double b{};

	std::cin >> a >> b;
	
	double media = ((a*3.5) + (b*7.5))/11;

	std::cout.precision(5);

	std::cout << "MEDIA = " << std::fixed << media << '\n';

	return 0;
}
