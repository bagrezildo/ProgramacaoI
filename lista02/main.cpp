#include <array>
#include <iostream>
#include <iterator>

#include "filter.h"

using namespace std;

bool pred(int value){
    return (value > 5);
}


int *filter(int *first, int *last, bool (*pred)(int value)){
    int *slow{first};
    int *fast{first};
    while (fast != last)
    {
        if (pred(*fast))
        {
            *slow = *fast;
            slow++;
            //cout << *fast << endl;
        }
        fast++;
    }
    
    return slow;
}

int main(){
    array vet{-2, -8, 6, 7, -3, 10, 1, 0, -3, 7};

  // Printing the filtered array.
    cout << ">>> Original array  = [ ";
    for (const auto &e : vet) {
        cout << e << " ";
    }
    cout << "], Size = " << vet.size() << '\n';

  // Filtering
    auto *new_end = filter(vet.begin(), vet.end(), pred);

  // Printing the filtered array.
    cout << ">>> FILTERED array  = [ ";
    auto *runner = vet.begin();
    while (runner != new_end) {
        cout << *runner++ << " ";
    }
    cout << "], Size = " << distance(vet.begin(), new_end) << "\n";

    return EXIT_SUCCESS;
}