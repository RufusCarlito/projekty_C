#include <unistd.h>
#include "GraEuklidesa.h"

using namespace std;

int GraEuklidesa(int graczA , int graczB){

    int aktualneKontoKrystiana = graczA;
    int aktualneKontoKrzyska = graczB;

    for (;;) {

        if (aktualneKontoKrzyska > aktualneKontoKrystiana) {
            aktualneKontoKrzyska = aktualneKontoKrzyska - aktualneKontoKrystiana;
        } else if (aktualneKontoKrzyska < aktualneKontoKrystiana) {
            aktualneKontoKrystiana = aktualneKontoKrystiana - aktualneKontoKrzyska;
        } else {
            break;
        }
    }
    //cout << "Konto krzyska: " << aktualneKontoKrzyska << endl;
    //cout << "Konto krystiana: " << aktualneKontoKrystiana << endl;
    cout  << aktualneKontoKrystiana + aktualneKontoKrzyska << endl;


    return 0;
}






int main() {


    int liczbaPartii = 0;
    cout << "Wpisz liczbe Partii : " << endl;
    cin >> liczbaPartii; //3
    int zetony_GraczaA[liczbaPartii];
    int zetony_GraczaB[liczbaPartii];

    for(int i=0 ; i<liczbaPartii  ;i++ ) {
        cout << "Podaj ilosc zetonow gracza A: " << endl;
        cin >> zetony_GraczaA[i];

        cout << "Podaj ilosc zetonow gracza B: " << endl;
        cin >> zetony_GraczaB[i];

    }

    // i++ post-inkrementacja
    // ++i pre-inkrementacja
    cout << "Wynik: " << endl;
    for(int i=0; i<liczbaPartii; i++)
        GraEuklidesa(zetony_GraczaA[i],zetony_GraczaB[i]);



    return 0;
}