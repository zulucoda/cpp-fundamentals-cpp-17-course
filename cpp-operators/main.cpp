#include <iostream>

#include "header-files/utility.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int i = 0;
    i += 2;
    i *= 3;
    i -= 2;
    i /= 4;

    int j = i++;
    j = ++i;
    j = i--;
    j = --i;

    i = 2;
    j = 0;
    while (i < 101)
        j += IsPrime(i++)?1:0;

    std::cout << "I found " << j << " prime up 100 " << std::endl;

    return 0;
}