#include<bits/stdc++.h>
using namespace std;

class MyClass{
    private:
        int secret;
    public:
    MyClass():secret(69){}
    friend void showSecret(MyClass obj);
};

void showSecret(MyClass obj){
    cout << "The secret is "<<obj.secret<<endl;
}

int main(){

    MyClass obj;
    showSecret(obj);
   
        

    return 0;
}