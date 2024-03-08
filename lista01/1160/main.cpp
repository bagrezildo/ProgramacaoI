#include <iostream>

using namespace std;

int main(){

    int casos;
    int pa, pb, anos;
    double g1, g2;
    cin >> casos;
    //cout << casos << '\n';
   // string os {};


     for (size_t i = 0; i < casos; i++)
     {
        cin >> pa;
        cin >> pb;
        cin >> g1;
        cin >> g2;

        anos = 0;

        while( pa <= pb){
            pa += (int)pa*g1/100;
            pb += (int)pb*g2/100;

            anos++;

            if (anos > 100)
            {
                break;
            }
            
        }

        if(anos > 100){
            cout << "Mais de 1 seculo.\n";
        }else{
            cout << anos << " anos.\n";
        }
        
     }
     
    
    return 0;

}