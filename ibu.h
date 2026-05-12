#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>
#include "anak.h"
class Ibu
{
public:
    // deklarasi member variabel
    std::string nama;
    std::vector<anak *> daftar_anak;
    // constructor
    Ibu(std::string pNama) : nama(pNama)
    {
        std::cout << "Ibu \"" << nama << "\" ada\n";
    }
