#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long int n;
    cin>>n;

    long long int count = 0;
    while(n>0){
        int digit = n%10;
        if(digit == 4 || digit == 7) count++;
        n /= 10;
    }
    if(count ==4 || count == 7)cout<<"YES";
    else cout<<"NO";


    return 0;
}