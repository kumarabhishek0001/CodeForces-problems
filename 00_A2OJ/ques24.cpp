#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    map <char, int> names;
    map <char, int> jumbled;

    string name1, name2;
    cin>>name1>>name2;

    string mixed;
    cin>>mixed;

    int name1Size = name1.size();
    int name2Size = name2.size();
    int mixedSize = mixed.size();

    if(name1Size + name2Size != mixedSize) cout<<"NO";

    else{
        //creating the map
        for(int i=0; i<name1Size; i++){
            names[name1[i]] += 1;
        }
        for(int i=0; i<name2Size; i++){
            names[name2[i]] += 1;
        }
        for(int i=0; i<mixedSize; i++){
            jumbled[mixed[i]] += 1;
        }
        
        //checking for disimilarity
        if(names == jumbled) cout<<"YES";
        else cout<<"NO";
    }

    
    
}