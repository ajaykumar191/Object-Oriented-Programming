#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=6;
    int count =0;        
    for(int i=0;i<n;i++){
                  
        for(int j=0;j<n;j++){
            count++;
            cout << "{ "<<i<<" , "<<j<<" }"<<endl;
        }
    }
    //3-->9
    //4-->16
    //5-->25
    //6 -->36
    cout<<"Total number of iterations are "<<count<<endl;




    return 0;
}