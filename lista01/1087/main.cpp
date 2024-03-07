#include <iostream>
#include <iomanip>

int main(){

    int x1, y1, x2, y2;

    while(std::cin >> x1 >> y1 >> x2 >> y2 and (x1 || y1 || x2 || y2)){
        //std::cout << x1 << x1 << x2 << y2 << '\n';

        if(x1 == x2 and y1 == y2){
            std::cout << 0 << std::endl;
        }else{
            if(x1==x2 || y1 == y2 || x1+y1 == x2+y2 || x1-y1 == x2-y2){
                std::cout << 1 << std::endl;
            }else{
                std::cout << 2 << std::endl;
            }
        }

    }
   


    
    return 0;
}