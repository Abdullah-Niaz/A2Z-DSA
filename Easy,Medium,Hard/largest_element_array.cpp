#include <bits/stdc++.h>
using namespace std;

int largestE(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;  
};

int main(){
    int ar[] = {1,2,6,5,8,12};
    int n = sizeof(ar)/sizeof(ar[0]);
    std::cout << "Largest Element is: ";
    cout << largestE(ar,n);
    
    
    return 0;
}