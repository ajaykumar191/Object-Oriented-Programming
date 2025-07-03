#include<bits/stdc++.h>
using namespace std;

class Demo{
    private:
        int num;
    public:
        Demo():num(100){}

        friend class Print;
};

class Print{
    public:
        void display(Demo d){
            cout<<"The number is "<<d.num<<endl;
        }
};
int main(){
    Demo d;
    Print p;
    p.display(d);
    return 0;
}