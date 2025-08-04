#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string balls;
    cin>>n>>balls;
    
    int count=0;
    for(int i=0; i<n; i++){
        if(balls[i] == balls[i+1]) count++;
    }
    cout<<count;
    return 0;
}