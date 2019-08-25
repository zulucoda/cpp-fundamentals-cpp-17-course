#include <iostream>

int main() {
    int i1 = 1;
    std::cout << "i1=" << i1 << std::endl;
    int i2;
    i2 = 2;
    std::cout << "i2=" << i2 << std::endl;
    int i3(3);
    std::cout << "i3=" << i3 << std::endl;
    int i4{ 4 };
    std::cout << "i4=" << i4 << std::endl;

    double d1 = 2.2;
    double d2 = i1;
    int i5 = static_cast<int>(d1);
    std::cout << "d1=" << d1 << std::endl;
    std::cout << "d2=" << d2 << std::endl;
    std::cout << "i5=" << i5 << std::endl;

    char c1 = 'a';
    //char c2 = "b";
    std::cout << "c1=" << c1 << std::endl;
//    std::cout << "c2=" << c2 << std::endl;

    bool flag = false;
    std::cout << "flag=" << flag << std::endl;
    flag = i1;
    std::cout << "flag=" << flag << std::endl;
    flag = static_cast<bool>(d1);
    std::cout << "flag=" << flag << std::endl;

    auto a1 = 1;
    auto a2 = 2.2;
    auto a3 = 'C';
    auto a4 = "s";
    auto a5 = true;
    auto a6 = 3L;
    auto a7 = 1'000'000'000'000;
    auto a8 = 0xFF; //255
    auto a9 = 0b111; //7


    a1 = a2;

    return 0;
}