#include <iostream>
#include <cmath>

int main(){
    double a,b,c;

    std::cin >> a >> b >> c;

    double maiorab = ((a + b + std::abs(a-b))/2);

    double maior = ((maiorab + c + std::abs(maiorab-c))/2);

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}