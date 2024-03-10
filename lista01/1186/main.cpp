#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char operacao;
    int tamanho{12};
    double matriz[tamanho][tamanho];
    double soma{0};
    int elementos{0};
    cin >> operacao;

    for (size_t i = 0; i < tamanho; i++)
    {
        for (size_t j = 0; j < tamanho; j++)
        {
            cin >> matriz[i][j];
            if(j > tamanho - 1 - i){
                soma += matriz[i][j];
                elementos++;
            }
        }
        
    }

    
    double media = soma / elementos;
    

    if (operacao == 'S')
    {
        cout << setprecision(1) << fixed << soma << endl;
    }else{
        cout << soma / elementos << endl;
    }
    

    return 0;
}