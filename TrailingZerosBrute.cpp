#include<bits/stdc++.h>
using namespace std;

int main(){ 

    //Number should be multiple of 5

    int n=20;

    int res =1;
    for(int i=1;i<=n;i++){  //O(n)
        res = res*i;
    }
    int count =0;

    while(res>0){  //O(z)  z is the size of the res

        if(res%10 !=0) break;
        count++;
        res =res/10;

    } //--log base 5(n)

    //100000000  ~ size of the result.

    cout << "Total number of trailing zeros are "<<count<<endl;


    //in total the time complexity is O(n)+O(z)
    // O(n)+logn
    return 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        }
    }

    //O(N^2)

    //divide by anything log base anything (n);

    //divide by 2 log 2 (n);--->log n
    //divide by 5 log 5 (n);--->log n
}