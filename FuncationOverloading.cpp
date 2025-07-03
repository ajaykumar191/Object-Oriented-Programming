#include<bits/stdc++.h>
using namespace std;
class Print{
    public:
        void print(int x){
            cout << "Integer "<<x <<endl;
        }
        void print(double y){
            cout << "Double "<<y <<endl;
        }
        void print(char z){
            cout << "Character "<<z <<endl;
        }
};
int main(){
    Print p;
    p.print(10);
    p.print(10.45);
    p.print('a');


    return 0;
}