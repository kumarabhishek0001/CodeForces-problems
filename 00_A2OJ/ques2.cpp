#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int calculation(int data[][5]){
    int current_column = 0;
    int current_row = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(data[i][j] == 1){
                current_column = j+1;
                current_row = i+1;
            }
        }
    }

    int row_transformation = abs(3-current_row);
    int column_transfomation = abs(3-current_column);

    return row_transformation+column_transfomation;
    
}

int main(){
    int arr[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    
    int result = calculation(arr);
    cout<<result;
    
    return 0;
}