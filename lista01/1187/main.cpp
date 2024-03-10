#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int tamanho{12};
    double matriz[tamanho][tamanho];
    char operacao;
    double soma{0.0};
    int elementos{0};

    cin >> operacao;

    for (size_t i = 0; i < tamanho; i++)
    {
        for (size_t j = 0; j < tamanho; j++)
        {
            cin >> matriz[i][j];
            if ((j > i) and (j < tamanho - i - 1 ))
            {
                soma += matriz[i][j];
                elementos++;
            }
            
        }
        
    }

    if(operacao =='S'){
        cout << setprecision(1) << fixed << soma << endl;
    }else{
        cout << setprecision(1) << fixed << soma/elementos << endl;
    }
    

    return 0;
}