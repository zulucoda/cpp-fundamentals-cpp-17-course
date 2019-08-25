#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int x;
    std::cout << "Enter a number" << std::endl;
    std::cin >> x ;

    bool prime = true;
    for(int i=2; i <= x/i; i = i + 1)
    {
        int factor = x/i;
        if(factor*i == x)
        {
            std::cout << "factor found: " << i << " * " << factor << std::endl;
            prime = false;
            break;
        }
    }

    std::cout << x << " is ";
    if (prime)
        std::cout << "prime" << std::endl;
    else
        std::cout << "not prime" << std::endl;

    return 0;
}