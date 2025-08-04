#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    int check = s[0];
    if(check<=122 && check >=97){
        char result = s[0] - 32;
        s[0] = result;
    } 
    
    cout<<s;


    return 0;
}