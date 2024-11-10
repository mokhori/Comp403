#include <iostream>

using namespace std;

int main()
{
    /*
    int a;
    a=5;
    */
    int a = 5, b, c = 4;
    cout << a + c << endl;

    double d = 3.14;

    bool bo = true;
    bool bo2 = false;
    bool bo3 = 0;

    b=1;
    cout << a << b << c << endl;

    cout << bo2 << endl << bo<<endl;

    auto a2 = 8;
    auto b2 = 3.14;

    const double pi = 3.14;
    // pi=2.56; error

    // a++ // a+=1;
    // a--
    // a=a+2; //a+=2;

    // a%=2; // a= a%2;
    // a/=2; // a=a/2;
    // a*=2; // a=a*2;

    int t = 5;
    cout << t++; // 5
    // t=6
    cout << t + 1; // 7
    // t=6
    cout << ++t; // 7
    // t=7

    return 0;
}
