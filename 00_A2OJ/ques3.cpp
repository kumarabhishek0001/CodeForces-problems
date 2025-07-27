#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //taking input
    int t,n;

    cin>>n;
    int total_student = n;

    cin>>t;
    int time = t;

    string original;
    cin>>original;

    string copy=original;

    //this iteration for number of times change in order is allowed
    for(int i=1; i<=t; i++){
        //iterating through the ques to change the order
        for(int j=original.size()-1; j>=1; j--){

            if(original[j-1] < original[j]) swap(copy[j], copy[j-1]);

        }original=copy;
    }
    cout<<original;
    

    return 0;
}