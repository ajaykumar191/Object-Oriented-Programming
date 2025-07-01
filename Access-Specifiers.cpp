#include<bits/stdc++.h>
using namespace std;

//ACCESSING THE DATA AND ATTRIBUTES.

//public -->1.inside the class 2. Outside the class 3. In derived class.
//protected -->1.inside the class 2. In derived class 3.Not allowed outside the class
//private -->1.inside the class 2. not allowed in derived calls 3. not allowed outisde the class

class Base{

    public:
        int data1 = 10;
    protected:
        int data2 = 20;
    private:
        int data3 = 30;

    public:
        void displayData(){
            cout<<"\nInside the Base class:\n";
            cout <<"Publlic Data "<< data1<<endl;
            cout <<"Protected  Data "<< data2<<endl;
            cout <<"Private Data "<< data3<<endl;
        }
};

class Derived: public Base{
    public:
        void displayDerivedData(){
             cout<<"\nInside the Derived class:\n";
            cout <<"Publlic Data "<< data1<<endl;
            cout <<"Protected  Data "<< data2<<endl;
            //cout <<"Private Data "<< data3<<endl;  //Erroo not accessible here because it is a private .
        }
};


int main(){

    Base b;
    Derived d;

    cout<<"\nOutside the Class\n";
    cout<<"Public data "<< b.data1<<endl;
    //cout<<"Protected data "<<b.data2<<endl; //not accessible here.
    //cout<<"Private data "<<b.data3<<endl; //not accessible here.

    b.displayData();
    d.displayDerivedData();
    return 0;
}