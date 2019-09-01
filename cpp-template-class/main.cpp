#include <iostream>
#include "header-files/Person.h"
#include "header-files/Accum.h"
using std::cout;
using std::endl;
using std::string;

int main() {

    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> strings("");
    strings += "hello";
    strings += " world";
    cout << strings.GetTotal() << endl;

//    Person start("", "", 0);
    Accum<Person> people(0);
    Person p1("Muzi","Buthelezi", 123);
    Person p2("Charley","Buthelezi", 456);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl;

    return 0;
}