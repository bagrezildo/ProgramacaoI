#include <iostream>
#include <string>

using namespace std;

int main(){

    string strBuf{};
    char character;
    bool check;
    int size;

    while(getline(cin >> ws, strBuf) and (strBuf.front() != '*')){
        //cout << strBuf << " has " << strBuf.front() << '\n';
        
        character = tolower(strBuf.front());
        check = true;
        //cout << character << ' ' << c2 << '\n';

        size = strBuf.size();

        for (size_t i = 0; i < size; i++)
        {
            if(strBuf[i] == ' '){
                if(tolower(strBuf[i+1]) != character)
                    check = false;
            }
        }
        
        if(check){
            cout << 'Y' << '\n';
        }else{
            cout << 'N' << '\n';
        }

    }
    
    return 0;
}