#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin>>input;
    bool found = false;
    for(int i=0; i<input.size(); i++){
        if(input[i] == 'H' ||input[i] == 'Q' ||input[i] == '9'){
            found = true;
            break;
        }
    }

    if(found){
        cout<<"YES";
    }
    else cout<<"NO";
    
    return 0;
}