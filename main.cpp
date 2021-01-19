#include <iostream>

using namespace std;
int n = 0;
int rekurencja(int xn)
{

    if(xn == 1) return 0;
    n++;

    int Xnplus1 ;
    if(xn%2 != 0){
        Xnplus1 = (3 * xn)+1;
        return rekurencja(Xnplus1);
    }else{
        Xnplus1 = xn/2;
        return rekurencja(Xnplus1);
    }
}

int main() {
    int liczbaTestow = 0, s=0;
    cout << "Podaj liczbe testow (t):";
    cin >> liczbaTestow;

    for(int i=0 ; i<liczbaTestow; i++){
        cout << "Podaj parametr (s) od 1 do 10 000:";
        cin >> s;
        rekurencja(s);

        cout << n << endl;
        n=0;
    }

    return 0;
}
