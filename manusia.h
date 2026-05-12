#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <string>
#include "Kompososijantung.h"

class manusia
{
public:
    std::string name;
    jantung varJantung;

    manusia(std::string pName)
        : name(pName)
    {
        std::cout << name << " hidup\n";
    }

    ~manusia()
    {
        std::cout << name << " mati\n";
    }
};

#endif