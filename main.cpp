#include <iostream>

using namespace std;

int rekurencja(int s)
{
//    if(s==1) return 0;
//    else return rekurencja(s-1)/2;

    if(s==0) return 0 ;

    cout << s << endl;
    return rekurencja(s-1);
}

int main() {

    int test = 0, s = 0;

    rekurencja(5);




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
