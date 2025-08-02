#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    bool s1isGreater = false;
    bool s2isGreater = false;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    if(s1 == s2) cout<<0;
    else{
        for(int i=0; i<s1.size(); i++){
            if(s1[i] < s2[i]){
                s2isGreater = true;
                break;
            }
            if(s1[i] > s2[i]){
                s1isGreater = true;
                break;
            }
            
            
        }

        if(s2isGreater) cout<<-1;
        if(s1isGreater) cout<<1;
    }
    


    return 0;
}