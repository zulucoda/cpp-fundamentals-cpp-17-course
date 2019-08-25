#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int x;
    std::cout << "Enter a number, 0 or negative to quit" << std::endl;
    std::cin >> x;

    while (x > 0)
    {
        switch(x)
        {
            case 1:
                std::cout << "you entered 1" << std::endl;
                break;
            case 2:
            case 3:
                std::cout << "you entered 2 or 3" << std::endl;
                break;
            case 4:
                std::cout << "you entered 4" << std::endl;
                break;

            case 5:
                std::cout << "you entered 5" << std::endl;
                break;
            default:
                std::cout << "you entered other than 1-5" << std::endl;
        }
        std::cout << "Enter a number, 0 or negative to quit" << std::endl;
        std::cin >> x;
    }

    return 0;
}