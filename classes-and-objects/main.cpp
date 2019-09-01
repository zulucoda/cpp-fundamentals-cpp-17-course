#pragma once

#include <iostream>
#include "header-files/Tweeter.h"
#include "header-files/status.h"

using std::cout;
using std::endl;
using std::string;

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


    return 0;
}