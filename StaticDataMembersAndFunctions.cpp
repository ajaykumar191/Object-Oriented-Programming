// #include<bits/stdc++.h>
// using namespace std;
// // Definition:
// // A static data member is a class-level variable, meaning:
// // It is shared by all objects of the class.
// // It is not tied to any specific object.
// // It exists even if no object is created.
// //Declaration and Initialization:
// // Declared inside the class using static keyword.
// // Defined and initialized outside the class using the scope resolution operator ::.

// class Demo{
//     public:
//         static int count;
//         static void showCount(int n);

// };

// int Demo :: count =0;
// void Demo :: showCount(int n){
//     count =count+n;
//     cout<<"Count is "<<count<<endl;
// }

// int main(){
//     Demo :: showCount(10);
//     Demo :: showCount(10);
//     Demo :: showCount(69);
   
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
        static int count;
        int age;
        string name;

        Student(string name,int age){
            this->name=name;
            this->age=age;
            count++;
        }

        static void displayCount(){
            cout<<"The total count is "<<count<<endl;
        }
};

int Student::count=0;
int main(){

    Student s1("Ajay A",22);
    Student s2("Anil A",24);
    Student s3("Amar A",26);
    Student::displayCount();


    return 0;
}