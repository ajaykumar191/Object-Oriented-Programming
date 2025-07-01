#include<bits/stdc++.h>
using namespace std;
//It is mainly used when:
// Parameter names are same as member variables
// Returning the current object from a method
// Passing the current object as argument
// Enabling method chaining

class Example{
    public:
        int x;

        void setX(int x){
            this->x = x;
        }
        void printX(){
            cout<<"X is "<<this->x<<endl;
        }

};

class Student{
    public:
        string name;
        int age;
        
        Student(string name,int age){
            this->name=name;
            this->age=age;

        }

        void displayData(){
            cout<<"Name :"<<this->name<<" Age "<<this->age<<endl;
        }
};
int main(){

    Example obj;
    obj.setX(10);
    obj.printX();

    Student s("Ajay A",22);
    s.displayData();

    return 0;
}