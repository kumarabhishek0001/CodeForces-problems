#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0; i<s.size(); i++){

        if(s[i] == '.') s.replace(s[i], 1, "0");

        if(s[i] == '-'){
            if (s[i+1] == '.') s.replace(i, 2, "1");
            if (s[i+1] == '-') s.replace(i, 2, "2");
        }

    }
    
}