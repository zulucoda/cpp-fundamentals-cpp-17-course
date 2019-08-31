//
// Created by muzikayise on 2019/08/24.
//
#pragma once
#include "header-files/Person.h"
#include <iostream>

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}

Person::Person(std::string first, std::string last, int arbitrary)
:
firstname(first),
lastname(last),
arbitrarynumber(arbitrary)
{
    std::cout << "constructing" << GetName() << std::endl;
}

Person::Person()
        :
        arbitrarynumber(0)
{
    std::cout << "constructing" << GetName() << std::endl;
}

Person::~Person()
{
    std::cout << "destructing" << GetName() << std::endl;
}
