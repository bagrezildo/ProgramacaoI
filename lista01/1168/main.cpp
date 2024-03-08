#include <iostream>
#include <string>

using namespace std;

int main(){

    int casos;

    cin >> casos;

    for (size_t i = 0; i < casos; i++)
    {
        string a;
        cin >> a;

        int leds {0};

        for (size_t i = 0; i < a.size(); i++)
        {
            switch (a[i])
            {
            case '1':
                leds += 2;
                break;
            case '2':
                leds += 5;
                break;
            case '3':
                leds += 5;
                break;
            case '4':
                leds += 4;
                break;
            case '5':
                leds += 5;
                break;
            case '6':
                leds += 6;
                break;
            case '7':
                leds += 3;
                break;
            case '8':
                leds += 7;
                break;
            case '9':
                leds += 6;
                break;
            default:
                leds += 6;
                break;
            }
        }
        
        cout << leds << " leds \n";

    }
    

    return 0;
}