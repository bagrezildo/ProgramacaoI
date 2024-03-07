#include <iostream>

int main(){

    int valor;


    std::cin >> valor;

    if (valor > 0 and valor < 1000000)
    {

        std::cout << valor << '\n';

        int centenas = valor / 100;
        std:: cout << centenas << " notas de R$ 100,00"<< '\n';
        
        int troco = valor - (centenas * 100);

        int cinquentas = troco/50;
        std:: cout << cinquentas << " notas de R$ 50,00"<< '\n';
        
        troco = troco - (cinquentas * 50);
        int vintes =  troco/20;
        std:: cout << vintes << " notas de R$ 20,00"<< '\n';
        

        troco = troco - (vintes * 20);
        int dezes = troco/10;
        std:: cout << dezes << " notas de R$ 10,00"<< '\n';

        troco = troco - (dezes * 10);
        
        int cincos = troco/5;
        std:: cout << cincos << " notas de R$ 5,00" << '\n';
        
        troco = troco - (cincos * 5);

        int dois = troco/2;
        std:: cout << dois << " notas de R$ 2,00"<< '\n';
        
        troco = troco - (dois *2);
    
        std:: cout << troco << " notas de R$ 1,00"<< std::endl;
    }
    

    return 0;
}