#include<bits/stdc++.h>
using namespace std;
class LivingBeing{
    public:
        void breathe(){
            cout << "Breathing..";
        }
};

class Animal:public LivingBeing{
    public:
        void eat(){
            cout << "Eating...";
        }
};
class Dog:public Animal{
    public:
        void bark(){
            cout<<"Barking...";
        }
};

int main(){

    Dog d;
    d.breathe();
    d.eat();
    d.bark();




    return 0;
}