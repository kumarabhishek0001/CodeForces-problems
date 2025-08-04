#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;

    

    int left=0, right=0;
    int l0count=0, r0count=0, l1count=0, r1count=0;
    for(int i=0; i<n; i++){
        cin>>left>>right;

        switch (left)
        {
        case 0:
            l0count++;
            break;
        
        default:
            l1count++;
            break;
        }
        switch (right)
        {
        case 0:
            r0count++;
            break;
        
        default:
            r1count++;
            break;
        }

    }

    int time  = 0;

    time = min(l0count, l1count) + min(r0count, r1count);
    cout<<time;
    return 0;
}