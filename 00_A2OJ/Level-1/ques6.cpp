#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputData[3][3];
    int result[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>inputData[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int sum = 0, top = 0, bottom = 0, left = 0, right = 0;
            
            int current = inputData[i][j];
            
            if(i>0) top = inputData[i-1][j];
            if(i<2) bottom = inputData[i+1][j];

            if(j>0) left = inputData[i][j-1];
            if(j<2) right = inputData[i][j+1];

            sum = current + top + bottom + left + right;

            if(sum%2 == 0) result[i][j] = 1;
            else result[i][j] = 0;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<result[i][j];
        }cout<<endl;
    }
    return 0;
}