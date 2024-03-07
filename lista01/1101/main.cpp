#include <iostream>

using namespace std;
int main(){
    
    
    int a, b;
    int maior, menor;
    while(cin >> a >> b and (a >0 and b >0)){
        //cout << a << b << endl;

        if(a > b){
            maior = a;
            menor = b;
        }else{
            maior = b;
            menor = a;
        }

        int soma = 0;
        for (int i = menor; i <= maior; i++)
        {
            cout << i << ' ';
            soma += i;
        }

        cout << "Sum=" << soma << endl;
        
    }
    

    return 0;
}