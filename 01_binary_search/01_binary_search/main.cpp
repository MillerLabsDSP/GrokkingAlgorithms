//
//  main.cpp
//  01_binary_search
//
//  Created by Zachary Miller on 9/29/24.
//

#include <iostream>
#include <string>

template <typename T>
int binary_search(std::vector<T>& list, const int& item) {
   
    /* Initialize index positions */
    int low, mid, high;
    low = 0;
    high = list.size() - 1;
    
    int guess;
    while (low <= high) {
        mid = std::floor((low + high) / 2);
        guess = list.at(mid);
        
        if (guess == item)      // item found!
            return mid;
        else if (guess > item)  // guess too high...
            high = mid - 1;
        else if (guess < item)  // guess too low...
            low = mid + 1;
        else                    // item not found :(
            return -1;
        
    }
    
    return 0;
    
}

int main(int argc, const char * argv[]) {

    std::vector<int> list = { 1, 3, 5, 7, 9 };
    int guess = 3;
    
    int guess_pos = binary_search(list, guess);

    std::cout << guess_pos << "\n";
    return 0;
}
