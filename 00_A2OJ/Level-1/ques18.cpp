#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int highest=0, least=0;

    int num1;
    cin>>num1;

    highest = num1;
    least = num1;

    int count = 0;
    for(int i=0; i<n-1; i++){
        int num;
        cin>>num;

        if(num>highest){
            highest = num;
            count++;
        } 
        if(num<least){
            least = num;
            count++;
        } 
    }
    cout<<count;
    return 0;
}