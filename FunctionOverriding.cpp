#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
        virtual void sound(){
            cout<<"Animal makes sound "<<endl;
        }
};
class Dog:public Animal{
    public:
        void sound (){
            cout<<"Dog barks "<<endl;
        }
};
int main(){

    Animal *a=new Dog();
    a->sound();
    // a.sound();
    // Dog d;
    // d.sound();
    return 0;
}