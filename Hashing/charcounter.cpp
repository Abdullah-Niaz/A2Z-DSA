#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "helloworld";
    int counter = 0;
    for (auto c:a)
    {
        if(c == 'o'){
            counter++;
        }
    }
    std::cout << "counter "<< counter << std::endl;
    
    
    return 0;
}