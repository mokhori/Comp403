#include<iostream>

using namespace std;

int main(){
    /*
    int a;
    a=5;
    */

    int a=5,b,c=4;
    

    cout<<a+c<<endl;

    cout<<a++;//5//5
    //a=6
    cout<<a+1;//6//7
    //a=6
    cout<<++a;//6//7
    //a=7

    cout<<endl;
    double d = 3.14;

    bool bo = true;
    bool bo2 = false;
    bool bo3 = 0;


    auto a2 = 8;

    auto b2 = 3.14;

    auto fsdfs = 3.14;


    const double pi = 3.14;

    a=a+1;

    //pi=2.56; error

    //a++ // a+=1;
    //a--
    //a=a+2; //a+=2;

    a%=2; // a= a%2;
    a/=2; // a=a/2;
    a*=2 // a=a*2;

    b=1;
    cout<<a<<b<<c<<endl;


    cout<<bo2<<endl<<bo;

    return 0;
}
