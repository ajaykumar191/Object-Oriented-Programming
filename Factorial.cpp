#include<bits/stdc++.h>
using namespace std;

int main(){


    int n=9;

    int res =1;
    for(int i=1;i<=n;i++){
        res*=i;
    }

    cout<<"The factorial is "<<res<<endl;

    return 0;
}