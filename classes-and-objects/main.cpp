#pragma once

#include <iostream>
#include <string>
#include "header-files/Tweeter.h"
#include "header-files/status.h"
#include "header-files/BankAccount.h"

using std::cout;
using std::endl;
using std::string;

template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}

int main() {

    Person p1("Muzi", "Buthelezi", 123);
    Person p2("Charley", "Buthelezi", 456);
    {
        Tweeter t1("Someone", "Else", 789, "@whoever");
        cout << "Tweeter Person 1: " << t1.GetName() << t1.GetNumber() << endl;
        Person p3;
    }

    cout << "Person 1: " << p1.GetName() << p1.GetNumber() << endl;
    p2.SetNumber(90000);
    cout << "Person 2: " << p2.GetName() << p2.GetNumber() << endl;

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notFound;
    fe = FileError::ok;

    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    cout << "OPERATOR OVERLOADING EXAMPLE===================" << endl;
    cout << "p1 is ";
    if(!(p1 < p2))
        cout << "not ";
    cout << "less than p2" << endl;

    cout << "p1 is ";
    if (!(p1 < 300))
        cout << "not ";
    cout << "less than 300" << endl;

    cout << "300 is ";
    if (!(300 < p1))
        cout << "not ";
    cout << "less than p1" << endl;
    cout << "OPERATOR OVERLOADING EXAMPLE*******************" << endl;

    cout << "GENERICS - TEMPLATES EXAMPLE===================" << endl;
    cout << "max of 33 and 44 is " << max(33,44) << endl;
    string s1 = "hello";
    string s2 = "world";
//    cout << "max of " << s1 << " and " << s2 << " is " << max(s1,s2) << endl;
    p2.SetNumber(1);
    cout << "max of " << p1.GetName() << " and " << p2.GetName() << " is " << max(p1,p2).GetName() << endl;
//    Example of a class that dues not implement operator overload
//    BankAccount b1;
//    BankAccount b2;
//    cout << "max of " << b1.GetHolderName() << " and " << b2.GetHolderName()
//    << " is " << max(b1, b2).GetHolderName() << endl;

    cout << "GENERICS - TEMPLATES EXAMPLE===================" << endl;


    return 0;
}