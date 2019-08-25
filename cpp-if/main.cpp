#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main() {
    std::cout << "Hello, World!" << std::endl;

    int x,y;
    cout << "Enter two numbers" << endl;
    cin >> x >> y;

    cout << x << " ";
    if (x > y) {
        cout << "is larger than ";
    }else{
        cout << "is not larger than";
    }
    cout << y << endl;
    if (x+y > 10)
        cout << "thanks for choosing larger numbers!" << endl;

    return 0;
}