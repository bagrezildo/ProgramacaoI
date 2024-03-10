#include <iostream>
#include <string>

using namespace std;

/*int character(char c){
    switch (c)
    {
    case 'A':
        return 0;
        break;
    case 'B':
        return 1;
        break;
    case 'C':
        return 2;
        break;
    case 'D':
        return 3;
        break;
    case 'E':
        return 4;
        break;
    case 'F':
        return 5;
        break;
    case 'G':
        return 6;
        break;
    case 'H':
        return 7;
        break;
    case 'I':
        return 8;
        break;
    case 'J':
        return 9;
        break;
    case 'K':
        return 10;
        break;
    case 'L':
        return 11;
        break;
    case 'M':
        return 12;
        break;
    case 'N':
        return 13;
        break;
    case 'O':
        return 14;
        break;
    case 'P':
        return 15;
        break;
    case 'Q':
        return 16;
        break;
    case 'R':
        return 17;
        break;
    case 'S':
        return 18;
        break;
    case 'T':
        return 19;
        break;
    case 'U':
        return 20;
        break;
    case 'V':
        return 21;
        break;
    case 'W':
        return 22;
        break;
    case 'X':
        return 23;
        break;
    case 'Y':
        return 24;
        break;
    case 'Z':
        return 25;
        break;
    default:
        return 0;
        break;
    }
}*/

int character(char c){
    if (c >= 'A' and c <= 'Z'){
        return c - 'A';
    }else{
        return -1;
    }
}


int main(){

    int casos;

    cin >> casos;

    for (size_t i = 0; i < casos; i++)
    {
        int linhas;
        cin >> linhas;
        int soma{0};
        for (size_t j = 0; j < linhas; j++)
        {
            
            string linha;
            cin >> linha;
            //int valor{0};
            for(int k = 0; k < linha.size(); k++){
               // valor += character(linha[k]) + j + k;    
               /* cout << character(linha[k]) + j + k << " = "
                    << character(linha[k]) << " + "
                    << j << " + " << k << " : '"
                    << linha[k] << "' no elemento " << j
                    << " posição " << k << '\n';*/
                soma += character(linha[k]) + j + k;
            }
            
            

        }
        cout << soma << '\n';
        
    }
    

    


    return 0;
}