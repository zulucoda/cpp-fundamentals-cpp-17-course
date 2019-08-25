//
// Created by muzikayise on 2019/08/24.
//
#pragma once
#include <string>


class Person
{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;


public:
    Person(std::string first, std::string last, int arbitrary);
    Person();
    ~Person();
    std::string getName();
};