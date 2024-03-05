#include <iostream>
#include <cmath>

int main(){
    double x1,y1;
    double x2,y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    double distancia = sqrt(pow((x2 -x1),2) + pow((y2-y1),2));

    std::cout.precision(4);
    std::cout << std::fixed << distancia << std::endl;

    return 0;

}