#include <bits/stdc++.h>
using namespace std;

int counterF(int ar[],chec){
    int count = 0;
    int n = sizeof(ar)/ sizeof(int);
    for (size_t i = 0; i < n; i++)
    {
        if(ar[i] == chec){
            count++;
        }
    }
    return count;
}

int main(){
    int a[] ={1,2,3,4,5,6,7,7,7,8,9};
    int chec = 7;
    cout << "Count of " << chec << " is " << counterF(a,chec);
    
    return 0;
}