#include<bits/stdc++.h>
using namespace std;

class Demo{

    private:
        int num1;
        int num2;
    public:
        Demo(): num1(10),num2(20){}
       // Demo(): num2(20){}

        friend void display(Demo d);
};
void display(Demo d){
    cout<<"The first number is "<<d.num1<<endl;
    cout<<"The second number is "<<d.num2<<endl;

}
int main(){

    Demo d;
    display(d);

    
    return 0;
}