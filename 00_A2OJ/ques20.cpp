#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string equation1;
    cin>>equation1;

    vector <char> nums;

    if(equation1.size() == 1) nums.emplace_back(equation1[0]);

    else{
        for(int i=0; i<equation1.size(); i += 2){
            nums.emplace_back(equation1[i]);
        }   
    }
    
    sort(nums.begin(), nums.end());

    string result;

    for(auto it:nums){
        result.push_back(it);
        result.push_back('+');
    }

    
    for(int i=0; i<result.size()-1; i++){
        cout<<result[i];
    }
    return 0;
    
}