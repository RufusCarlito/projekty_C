//
// Created by kryst on 19.03.2021.
//

#include "Biblioteka.h"


int main(){




    Biblioteka* nowaBiblioteka = new Biblioteka("NowaBib",6,9);
    nowaBiblioteka->info();


//
//    bibliotekaWciechanowie.info();
//    bibliotekaWRadyminie.info();
//
//    printf("Adres obiektu przed funkcja  %x\n\n", &bibliotekaWciechanowie);
//
//    bibliotekaWRadyminie.oddaj(&bibliotekaWciechanowie,15);
//
//    bibliotekaWciechanowie.info();
//    bibliotekaWRadyminie.info();


}



Biblioteka :: Biblioteka(string nazwa, int iloscKsizazek, int iloscPracownikow){

    this->nazwa.append(nazwa);
    this->nazwa.append("_V2");

    this->iloscKsiazek = iloscKsizazek;
    this->iloscPracownikow = iloscPracownikow;

   // testRekurancja();

}








void Biblioteka :: info(){

    std::cout << "Informacje o bibliotekce " << this->nazwa << "\n";

    printf("Ilosc Pracowników %d\n", this->iloscPracownikow);
    printf("Ilosc ksiazek %d\n\n", this->iloscKsiazek);


}

void Biblioteka ::oddaj(Biblioteka *  biblioteka, int libczaKsiazek) {

    this->iloscKsiazek -= libczaKsiazek;
    biblioteka->iloscKsiazek += libczaKsiazek;

    printf("Po dodaniu  %d\n\n", biblioteka->iloscKsiazek);

    printf("Adres obiektu w funkcji  %x\n\n", &biblioteka);



}

