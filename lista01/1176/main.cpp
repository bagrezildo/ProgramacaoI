#include <iostream>

using namespace std;

int main(){
    
    int casos;
    cin >> casos;

    // le o enesio elemento
    int elemento;

    for (size_t i = 0; i < casos; i++)
    {
        cin >> elemento;

        long long int vetor[elemento];
        for (size_t i = 0; i <= elemento; i++)
        {
            if(i == 0){
                vetor[i] = 0;

            } else if(i == 1){
                vetor[i] = 1;
            } else{
                vetor[i] = vetor[i-1] + vetor[i-2];
            }
                cout << vetor[i] << '\n';
        }
        
        cout << "Fib(" << elemento << ") = " << vetor[elemento] << '\n';
        
    }
    


    return 0;
}