#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cout << "Enter the size of Array: " << std::endl;
    cin>>n;
    int arr[n];
    std::cout << "Enter the Elements of Arry: " << std::endl;
    unordered_map<int, int> a; // there is no order maintined
    // so the insertion will be of o(1)
    // and storing to the hashmap is o(n)
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        a[arr[i]]++;
    }

    std::cout << "Displaying the Value and Frequency" << std::endl;
    for(auto var : a)
    {
        cout<<"Value: "<<var.first <<" Frequency: "<<var.second;
        cout<<endl;
    }

    int q;
    std::cout << "Enter the number of queries: " << std::endl;
    cin>>q;

    while(q--){
        int x;
        std::cout << "\nEnter the Number to Find: " << std::endl;
        cin>>x;
        if(a.find(x) != a.end()){
            cout<< a[x];
        }
        else{
            cout<<"Does not Exist";
        }
    }

    return 0;
}   