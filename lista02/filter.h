#ifndef FILTER_H
#define FILTER_H

template<typename T, typename Cmp>
T *filter(T *first, T *last, Cmp pred){
    T *slow{first};
    T *fast{first};
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

#endif