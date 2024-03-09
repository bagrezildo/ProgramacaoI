#include <iostream>

using namespace std;


int main(){

    int vetor[20];

    for (size_t i = 0; i < 20; i++)
    {
        cin >> vetor[i];
    }
    
    int j = 19;
    int medio;
    for (size_t i = 0; i <= 19; i++)
    {
        cout << "N[" << i << "] = " << vetor[j] << '\n';
        j--;
        
    }
    


    return 0;
}