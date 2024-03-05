#include <iostream>

int main()
{
    //std::cout << "Enter two numbers: ";
    
    int x{};
    int y{};
    
    
    std::cin >> x >> y;

    int soma = x + y;

    std::cout << "SOMA = " << soma << '\n';

    return 0;
}