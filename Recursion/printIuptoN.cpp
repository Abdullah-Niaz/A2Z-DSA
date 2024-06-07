#include <bits/stdc++.h>
using namespace std;

int printN(int i , int N){
    if(i > N ){
        return 0;
    }
    else{
        cout<<i<<" ";
        printN(i+1 , N);
        // cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    printN(1,n);
    
    return 0;
}