#include <bits/stdc++.h>
using namespace std;

int secondLargest(int a[], int n ){
    int largest = a[n-1];
    int secondL;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > largest){
            secondL = a[i];
            break;
        }
    }
    return secondL;
}

int main(){
    int a[] = {1,2,4,7,8,9}; // sorting takes O(n log n )
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Second largest Element is: "<< secondLargest(a,n);
    
    return 0;
}