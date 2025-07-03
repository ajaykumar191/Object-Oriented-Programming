#include<bits/stdc++.h>
using namespace std;

class Parent{
    private:
        int num;
    public:
        Parent():num(100){}
        friend class Child;
};
class Child{
    public:
        void display(Parent p){
            cout<<"The number is "<<p.num<<endl;
        }
};
int main(){
    Parent p;
    Child c;
    c.display(p);

    return 0;
}