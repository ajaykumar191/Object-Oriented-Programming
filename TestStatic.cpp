#include<bits/stdc++.h>
using namespace std;
class Example{
    public:
     static int count ;
     int age;
     string name;
     Example(string name,int age){
        this->name = name;
        this->age = age;
        
     }
     void displayNameAndAge(){

        cout << "Name "<<name<<" age "<<age<<endl;
        count++;
     }
    static void displayData(){
        cout << "Count is "<<count<<endl;
    }
};

int Example  :: count =0;
int main(){
    Example e1("Ajay A",22);
    Example e2("Anil A",24);

    e1.displayNameAndAge();
    e2.displayNameAndAge();
    Example::displayData();

   

    return 0;
}