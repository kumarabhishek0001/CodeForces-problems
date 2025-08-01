#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    set <char> uniqueChars;
    string name;
    cin>>name;

    for(int i=0; i<name.size(); i++){
        uniqueChars.insert(name[i]);
    }

    int check = uniqueChars.size();

    if(check%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}