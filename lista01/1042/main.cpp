#include <iostream>

int main(){
    
    int a,b,c;
    
    std::cin >> a >> b >> c;

    int maior, meio, menor;

    if (a > b and a > c){
        maior = a;

        if(b > c){
            meio = b;
            menor = c;
        } else{
            meio = c;
            menor = c;
        }
    } 

    if (b > a and b > c)
    {
        maior = b;

        if(a > c){
            meio = a;
            menor = c;
        }else{
            meio = c;
            menor = a;
        }
    }else{
        maior = c;
        if (a > b){
            meio = a;
            menor = b;
        }else{
            meio = b;
            menor = a;
        }
    }

    std::cout << menor << '\n'
              << meio << '\n'
              << maior << '\n';
    std::cout << '\n';
    std::cout << a << '\n'
              << b << '\n'
              << c << std::endl;

    return 0;
}