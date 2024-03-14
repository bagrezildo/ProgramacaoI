#include <array>
#include <iostream>
#include <iterator>


#include "filter.h"

using namespace std;

bool pred(int value){
    return (value > 0);
}

bool greater_than_5(int value){ return (value>5);}

bool less_than_3_chats(const string& str){
    if (str.size() > 3)
    {
        return true;
    }
    else{
        return false;
    }    
}

int main(){
    array vet{-2, -8, 6, 7, -3, 10, 1, 0, -3, 7};
    array vet2{"one", "two", "three", "four", "five", "array", "tapioca"};

  // Printing the filtered array.
    cout << ">>> Original array  = [ ";
    for (const auto &e : vet2) {
        cout << e << " ";
    }
    cout << "], Size = " << vet2.size() << '\n';

  // Filtering
    auto *new_end = filter(vet.begin(), vet.end(), pred);
    auto *new_end2 = filter(vet2.begin(), vet2.end(), less_than_3_chats);

  // Printing the filtered array.
    cout << ">>> FILTERED array  = [ ";
    auto *runner = vet2.begin();
    while (runner != new_end2) {
        cout << *runner++ << " ";
    }
    cout << "], Size = " << distance(vet2.begin(), new_end2) << "\n";

    return EXIT_SUCCESS;
}