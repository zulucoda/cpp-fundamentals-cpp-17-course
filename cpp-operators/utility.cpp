//
// Created by muzikayise on 2019/08/31.
//
#include <iostream>

#include "header-files/utility.h"


bool IsPrime(int x) {
    bool prime = true;
    for (int i=2; i <= x/i; i = i + 1)
    {
        int factor = x/i;
        if (factor*i == x)
        {
            std::cout << "factor found: " << factor << std::endl;
            prime = false;
            break;
        }
    }
    return prime;
}

bool Is2MorePrime(int const& x)
{
    return IsPrime(x+2);
}

//never return a reference: this is called a dangling reference.
//always return by value
//int& BadFunctions()
//{
//    int a = 3;
//    return a;
//}
