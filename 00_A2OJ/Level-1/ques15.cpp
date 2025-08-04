#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int drinks[n];
    for(int i=0; i<n; i++){
        cin>>drinks[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + drinks[i];
    }
    
    

    double result = (double)sum/n;
    cout<<fixed<<setprecision(5)<<result;
    
    return 0;
}