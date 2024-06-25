#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cout << "Enter the Size of Array: " << std::endl;
    cin >> n;
    int arr[n];
    std::cout << "Enter the Elements of Array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    
    // fetch the data from the hashing
    int q;
    std::cout << "Enter the Number of Queries: " << std::endl;
    cin>>q;
    while (q--)
    {
        int number;
        std::cout << "Enter the Number to be Searched: " << std::endl;
        cin >> number;
        cout << hash[number] <<endl;
    }
    
    
    return 0;
}