#include <iostream>
#include <string>

using namespace std;

int main(){

    
    string linha;


    
    while (getline(cin, linha))
    {
        int array[96]{0};
        int valor{0};
        int ascii{0};
        for(char c : linha){
           // cout << c << " " << int(c) << endl;
            valor = int(c) - 32;
            //cout << valor << endl;
            array[valor]++;
        }
        
        for (int freq = 1; freq <= linha.size(); freq ++){
            for (int i = 95; i >= 0; i--)
            {
                if (array[i] == freq)
                {
                    ascii = i + 32;
                    cout << ascii << " " << array[i] << '\n';
                    //cout << endl;
                }
                
            }
            
        }

        if (cin.peek() != EOF)
        {
            cout << '\n';    
        }  
    }

    return 0;
}