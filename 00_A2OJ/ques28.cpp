#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int inputData[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>inputData[i][j];
        }
    }
    int attemptCount = 0;
    for(int i=0; i<n; i++){
        int questionCount = 0;
        for(int j=0; j<3; j++){
            if(inputData[i][j] == 1) questionCount++;
        }
        if(questionCount>=2) attemptCount++;
    }
    cout<<attemptCount;


    return 0;
}