#include<bits/stdc++.h>
using namespace std;

//Ojbect is a real world entity.
//Class is a Buleprint of an object

class Example{
    public:
        int data;
        void printData(){
            cout << "Data is "<<data<<endl;
        }
};
int main(){ 

    Example obj;
    obj.data=10;
    obj.printData();

    return  0;
}