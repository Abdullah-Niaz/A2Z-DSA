#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    int arr[n];
    map<int,int> ma;
    // map<map of int, storing it's frequency> 
    // map<key, value>
    for (int i = 0; i < n; i++)
    {
        // insetion is of o(n)
        cin>>arr[i];
        ma[arr[i]]++;
    }
    
    int q;
    cout<<"Enter the Number of Queries: ";
    cin>>q;
    while (q--)
    {
        int number;
        std::cout << "Enter the Queuery: " << std::endl;
        cin>>number;
        std::cout << ma[number] << std::endl;
    }
    
    
    return 0;
}