#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=100;

    if(n<5 ){

        cout << "Total number of trailing zeros are "<<0<<endl;

        return 0;
    }

    int count =0;
    int pow=5;
    int res =5;
    while(n/pow>0){ 

        count+=n/pow;
        pow=5*pow;
    }
    cout << "Total number of trailing zeros are "<<count<<endl;


    return 0;

        // 25/5 + 25/25 -->6
        //20/5 + 20/25 -->5
        //45/5 + 45/25 --->9+1=10;

        //55/5 + 55/25 -->
        //100/5 + 100/25+ 100/125 -->29
    //O(log n)   actually log base 5

    //5   25  75  125
    //5^1 5^2 5^3 5^4

    
    //20-->1
    //25 -->2
    //30 -->
}

//log base 5 (n)  --->log(n)

//2^1 2^2 2^3 2^4 ---->log base 2(n)