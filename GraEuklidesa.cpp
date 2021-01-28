#include <unistd.h>
#include "GraEuklidesa.h"

using namespace std;

int GraEuklidesa(int graczA , int graczB){

    int aktualneKontoKrystiana = graczA;
    int aktualneKontoKrzyska = graczB;

    for (;;) {

        if (aktualneKontoKrzyska > aktualneKontoKrystiana) {
            // aktualneKontoKrzysika -= aktualneKontoKrystiana;
            aktualneKontoKrzyska = aktualneKontoKrzyska - aktualneKontoKrystiana;
        } else if (aktualneKontoKrzyska < aktualneKontoKrystiana) {
            // aktualneKontoKrystiana -= aktualneKontoKrzysika;
            aktualneKontoKrystiana = aktualneKontoKrystiana - aktualneKontoKrzyska;
        } else {
            break;
        }
    }
    //cout << "Konto krzyska: " << aktualneKontoKrzyska << endl;
    //cout << "Konto krystiana: " << aktualneKontoKrystiana << endl;
    cout <<"Suma: " << aktualneKontoKrystiana + aktualneKontoKrzyska << endl;


    return 0;
}






int main() {


    int liczbaPartii = 0;
    cout << "Wpisz liczbe Partii : ";
    cin >> liczbaPartii; //5
    int zetony[liczbaPartii * 2];
    // {11,23,43,13,12,32,12,33,42,12}
    // { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    int zetonyGraczA = 0, zetonyGraczB = 0;
    for(int i=0 ; i<liczbaPartii * 2 ; ) {
        cout << "Podaj ilosc zetonow gracza A: ";
        cin >> zetonyGraczA;
        cout << "Podaj ilosc zetonow gracza B: ";
        cin >> zetonyGraczB;

        zetony[i] = zetonyGraczA;
        zetony[++i] = zetonyGraczB;
        i++;
    }


    // i++ post-inkrementacja
    // ++i pre-inkrementacja

    while (liczbaPartii > 0) {
        // {11,23,43,13,12,32,12,33,42,12}
        // { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
        int index = liczbaPartii * 2;
        int graczA = zetony[index];
        int graczB = zetony[index+1];

        GraEuklidesa(graczA, graczB);
        liczbaPartii--;
    }

    int a =9;

    return 0;
}