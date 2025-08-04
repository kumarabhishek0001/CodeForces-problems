#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool equiCheck(vector <array<int,3>>& data, int N){
    int sum_X = 0;
    int sum_Y = 0;
    int sum_Z = 0;
    for(int i=0; i<N; i++){
        sum_X += data[i][0];
        sum_Y += data[i][1];
        sum_Z += data[i][2];
    }
    if(sum_X==0 && sum_Y==0 && sum_Z==0) return true;
    else return false;
}


int main(){
    int n;
    cin>>n;
    vector <array<int, 3>> data(n); 

    for(int i=0; i<n; i++){
        cin>>data[i][0]>>data[i][1]>>data[i][2];
    }

    if (equiCheck(data, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }   

    return 0;
}