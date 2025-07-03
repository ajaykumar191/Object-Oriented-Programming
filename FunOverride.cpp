#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
        virtual void display(){
            cout<<"Parent class"<<endl;
        }
};

class Child:public Parent{
    public:
        void display (){
            cout<<"The chidl class"<<endl;
        }
};
int main(){
    // Parent * p = new Child();
    // p->display();

    Parent *p;
    Child c;
    p=&c;
    p->display();




    return 0;
}