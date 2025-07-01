#include<bits/stdc++.h>
using namespace std;


//Constructor 
//1. Same name as class
//2. No return type
//3. called when objected is created.
//4.Overloading can occur
//5.Can have paramaters

//Destructors
//Same as class name, prefixed with ~
//no return Type
//No overloading
//No parameters
//Object destroyed when it is called.

class Demo{
    public:
        int data;
        //Default Constructor.
        Demo(){
            cout<<"Default constructor is called! "<<endl;
            data =0;
        }
        //Parametarized Constructor.
        Demo(int val){
            cout<<"Paramater constructor is called! "<<endl;
            data =10;
        }
        //Destructor
        ~Demo(){
            cout<<"Destructer has been called! "<<endl;
        }

        void printData(){
            cout<<"Data is "<<data<<endl;
        }
};
int main(){

    cout<<"Creating the object with default constructor "<<endl;
    Demo obj1;
    obj1.printData();

    cout<<"Creating the object with parametarized constructor "<<endl;
    Demo obj2(69);
    obj2.printData();

    cout<<"The end"<<endl;
    return 0;
}