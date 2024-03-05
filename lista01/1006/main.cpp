#include <iostream>

int main()
{
	double a;
	double b;
	double c;
	
	std::cin >> a >> b >> c;


	double media = ((a*2) + (b*3) + (c*5)) /10;

	std::cout.precision(1);
	std::cout << "MEDIA = " << std::fixed << media << '\n';

	return 0;
}
