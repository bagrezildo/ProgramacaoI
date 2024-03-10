#include <iostream>

using namespace std;

int main(){

    int l, c;
    cin >> l >> c;

    int xadrez[l][c];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            if ((i+j)%2 == 0)
            {
                xadrez[i][j] = 1;
            }else{
                xadrez[i][j] = 0;
            }
        }
    }

    cout << xadrez[l-1][c-1] << '\n';
    


    return 0;
}