#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector <pair<int, int>> coordinates; 

    int count = 0;
    

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        coordinates.emplace_back(x,y);
    }

    for(auto it = coordinates.begin(); it!=coordinates.end(); it++){
        
        int X_COORDINATE = it->first;
        int Y_COORDINATE = it->second;

        cout<<"current: "<<X_COORDINATE<<","<<Y_COORDINATE<<endl;

        //directions
        int right = 0;
        int left = 0; 
        int top = 0;
        int bottom = 0;

        for(auto coord: coordinates){
            if(coord.second == Y_COORDINATE){
                if(coord.first > X_COORDINATE){
                    right++;
                    cout<<"Right neighbour: "<<"("<<coord.first<<","<<coord.second<<")"<<endl;
                
                } 
                if(coord.first < X_COORDINATE){
                    left++;
                    cout<<"Left neighbour: "<<"("<<coord.first<<","<<coord.second<<")"<<endl;    
                } 
            }

            if(coord.first == X_COORDINATE){
                if(coord.second > Y_COORDINATE){
                    cout<<"top neighbour: "<<"("<<coord.first<<","<<coord.second<<")"<<endl;    
                    top++;

                } 
                if(coord.second < Y_COORDINATE){
                    cout<<"bottom neighbour: "<<"("<<coord.first<<","<<coord.second<<")"<<endl;    
                    bottom++;
                } 
            }
    
        }

        if(right>=1 && left>=1 && top>=1 && bottom>=1){
            cout<<"It's super center"<<endl;
            count++;
        }
        
        cout<<"----------------------***------------------------"<<endl;

    }

    cout<<count;
    return 0;
}