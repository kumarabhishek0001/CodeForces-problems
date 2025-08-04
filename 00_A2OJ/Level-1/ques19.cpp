#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int initPassengers = 0;
    int capcity = 0;
    for(int i=0; i<n; i++){
        
        int exiting = 0;
        cin>>exiting;

        initPassengers -= exiting;

        int entering = 0;
        cin>>entering;

        initPassengers += entering;

        if(initPassengers > capcity) capcity = initPassengers;



    }
    
    cout<<capcity;
    return 0;
}