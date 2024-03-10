#include <iostream>
#include <cctype>

using namespace std;


bool validade(string linha){
    bool maiuscula{false}, minuscula{false}, numero{false}, pontuacao{true}, espaco{true};
    for(char c : linha){
        if(c >= 'A' and c <= 'Z'){
            maiuscula = true;
        }
        if(c >= 'a' and c <= 'z'){
            minuscula = true;
        } 
        if(c >= '0' and c <= '9'){
            numero = true;
        }
        if (ispunct(c)){
            pontuacao =  false;
        }
        if (isspace(c))
        {
            espaco = false;
        }
        
    }

    return maiuscula and minuscula and numero and pontuacao and espaco;
}

int main(){

    string linha;

    while(getline(cin, linha)){
        if (linha.size() >= 6 and linha.size() <= 32)
        {
            if(validade(linha)){
                cout << "Senha valida.\n";
            }else{
                cout << "Senha invalida.\n";
            }

        }else{
            cout << "Senha invalida.\n";
        }
        
    }

    return 0;
}