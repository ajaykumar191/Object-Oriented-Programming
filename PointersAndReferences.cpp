#include<bits/stdc++.h>
using namespace std;

void changeValuebyPointer(int *c){
    *c=100;
}

void changeValueByReference(int &d){
    d=300;
}

int main(){
    
    int c=50;
    int d=75;

    cout << "C "<<c<<endl;
    int *cptr=&c;
    cout << "D "<<d<<endl;

    changeValuebyPointer(cptr);
    changeValueByReference(d);

    cout << "C "<<c<<endl;
    cout << "D "<<d<<endl;



    int a = 10;
    int *ptr =&a;

    // int * prt means it is pointer to int 
    // &a gives the address of the a;

    cout<<"a "<<a <<endl;
    cout << "Address of a "<<ptr<<endl;

    //we can change the value of a variable using the pointer 
    *ptr =20;

    cout<<"a "<<a<<endl;
    cout << "Address of a "<<ptr<<endl;

    //Reference
    int b=5;
    int &ref =b;
    cout<<"b is "<<b<<endl;
    ref = 69;
    cout<<"b is "<<b<<endl;

    //cout<<"b is "<<b<<endl;


    return 0;
}