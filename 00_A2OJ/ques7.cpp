#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin>>s;

    int lowerCount = 0;
    int upperCount = 0;

    for(int i=0; i<s.size(); i++){
        int current = s[i];

        if(current>=65 && current<=90) upperCount++;
        else lowerCount++;

    }
    if(upperCount>lowerCount) transform(s.begin(),s.end(), s.begin(), ::toupper);
    else transform(s.begin(),s.end(), s.begin(), ::tolower);

    cout<<s;

    

    return 0;
}