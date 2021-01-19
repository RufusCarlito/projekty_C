#include <iostream>

using namespace std;

int rekurencja(int xn)
{

    if(xn > 10000) return 0;

    int Xnplus1 = 0;
    if(xn%2 != 0){
        Xnplus1 = (3 * xn)+1;
        cout << Xnplus1 << endl;
        return rekurencja(Xnplus1);
    }else{
        Xnplus1 = xn/2;
        cout << Xnplus1 << endl;
        return rekurencja(Xnplus1);
    }
}

int main() {

    int test = 0, s = 0;

    rekurencja(1);

    for(int i=1 ; i<5; i++){
        rekurencja(i);
    }



//    cin>>test;
//    for (int i=0; i<=test; i++)
//    {
//        cin>>s;
//        if((s%2==0) || (s==0))
//        {
//            cout <<"parzysta" << endl;
//
//        }else{
//            cout <<"nieparzysta" <<endl;
//        }
//    }
    return 0;
}
