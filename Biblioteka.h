//
// Created by kryst on 19.03.2021.
//

#ifndef TESTCLION_BIBLIOTEKA_H
#define TESTCLION_BIBLIOTEKA_H

#include <string.h>
#include <cstring>
#include <cstdio>
#include <string>
#include <iostream>
#include "Rekurencja.h"


using namespace std;


class Biblioteka {
public:

    string nazwa;
    int iloscKsiazek{};
    int iloscPracownikow{};

    Biblioteka(std::string nazwa, int iloscKsizazek, int iloscPracownikow);



    void info();
    void oddaj(Biblioteka *  biblioteka, int libczaKsiazek);


};


#endif //TESTCLION_BIBLIOTEKA_H
