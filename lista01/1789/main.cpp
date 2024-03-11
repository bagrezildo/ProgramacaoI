#include <iostream>

using namespace std;



int main(){

    while(!cin.eof()){
        int qtdLesmas;
        cin >> qtdLesmas;
        int velLesmas[qtdLesmas];
        int maior{0};
        for (size_t i = 0; i < qtdLesmas; i++)
        {
            cin >> velLesmas[i];
            if(velLesmas[i] > maior){
                maior = velLesmas[i];
            }
        }
        if(!cin.eof()){
            if (maior < 10)
            {
                cout << 1 << '\n';
            }else if (maior >= 10 and maior < 20)
            {
                cout << 2 << '\n';
            }else if (maior >= 20){
                cout << 3 << '\n';
            }
        }
    }

    return 0;
}