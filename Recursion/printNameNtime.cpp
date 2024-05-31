#include <bits/stdc++.h>
using namespace std;

void f(int i,int N){
    if(i>N)
    {
        return;
    }
    else{
        f(i+1,N);
        cout<<"Omer: "<< i << endl;
    }
    
};

int main(){
    int N;
    cout<<"Enter the N: ";
    cin>>N;
    f(1,N);
    return 0;
}