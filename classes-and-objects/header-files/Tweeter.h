//
// Created by muzikayise on 2019/08/24.
//

#include "Person.h"
#include <string>

class Tweeter :
        public Person
{
private:
    std::string twitterhandle;

public:
    Tweeter(std::string first,
            std::string last,
            int arbitrary,
            std::string handle);
    ~Tweeter();

};