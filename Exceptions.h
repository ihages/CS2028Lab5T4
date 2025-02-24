#ifndef __EXCEPTIONS_HPP
#define __EXCEPTIONS_HPP
#include <iostream>

class FullShelf {
    public:
        std::string errorMessage;
        int errorNumber;
        FullShelf(std::string m, int n) : errorMessage(m), errorNumber(n) {}
};

class EmptyShelf{
    public:
        std::string errorMessage;
        int errorNumber;
        EmptyShelf(std::string m, int n) : errorMessage(m), errorNumber(n) {}
};


#endif