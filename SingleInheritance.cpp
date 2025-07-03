#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void run(){
            cout<<"Animal is running "<<endl;
        }
};

class Dog : public Animal{
    public :
        void eat(){
            cout<<"Dog eating "<<endl;
        }
};

int main(){

    Animal a;
    a.run();
    Dog d;
    d.run();
    d.eat();

    return 0;
}