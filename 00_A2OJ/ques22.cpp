#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cin>>num;
    
    for(int i=0; i<num; i++){
        string s;
        cin>>s;

        int wordLength = s.size();
        int abb = s.size()-2;

        if(wordLength>10){
            cout<<s[0]<<abb<<s[wordLength-1];
        }
        else cout<<s;

        cout<<endl;
    }
    return 0;
}