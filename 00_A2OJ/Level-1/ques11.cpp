#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0, m=0;
    bool found = false;
    cin>>n>>m;
    
    for(int i=n+1; i<=m; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0) count++;
        }
        if(count == 2){
            if(i == m) cout<<"YES";
            else cout<<"NO";
            found = true;
            break;
        }
        
        
    }
    if(!found) cout<<"NO";
    return 0;
}