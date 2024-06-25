#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
       
    int q;
    cout<<"Enter the Number of Queries: ";
    cin>>q;
    while (q--)
    {
        char c;
        cout<<"Enter the Character: ";
        cin>>c;
        cout<<"Frequency of "<<c<<" is: "<<hash[c-'a']<<endl;
    }
    
    return 0;
}