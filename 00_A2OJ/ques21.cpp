#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    set <int> st;
    for(int i=0; i<4; i++){
        int color;
        cin>>color;

        st.insert(color);
    }

    int size=st.size();

    int shoes = 4 - size;
    cout<<shoes;
    return 0;
}