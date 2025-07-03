#include<bits/stdc++.h>
using namespace std;
class MyClass{
    private:
        int num;
    public:
        MyClass() : num(33){}
        friend void display(MyClass obj);

};

void display(MyClass obj){
    cout<<"The number is "<<obj.num<<endl;
}

int main(){

    MyClass obj;
    display(obj);
    return 0;
}