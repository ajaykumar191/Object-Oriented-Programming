#include<bits/stdc++.h>
using namespace std;
//Constructor overloading means defining multiple constructors in the same class with different parameter lists (number or type of parameters).

class Student{
    public:
        string name;
        int age;

        Student(){
            name="Unknown";
            age=0;
            cout << "Default Constructor "<<endl;
        }
        Student(string n){
            name=n;
            age=18;
            cout << "Constructor witn name "<<endl;
        }
        Student(string n,int a){
            name=n;
            age=a;
            cout << "Constructor with both name and age "<<endl;
        }

        void displayData(){
            cout<<"Name "<<name<<" Age "<<age<<endl;
        }
};
int main(){

    Student obj1;
    obj1.displayData();

    Student obj2("Ajay A");
    obj2.displayData();

    Student obj3("Ajay A",22);
    obj3.displayData();


    return  0;
}