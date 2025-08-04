#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    set <int> st;
    
    int k=0, l=0, m=0, n=0, d=0;
    cin>>k>>l>>m>>n>>d;

    for(int i=1; k*i<=d; i++){
        int store = k*i;
        st.insert(store);
    }

    for(int i=1; l*i<=d; i++){
        int store = l*i;
        st.insert(store);
    }
    for(int i=1; m*i<=d; i++){
        int store = m*i;
        st.insert(store);
    }
    for(int i=1; n*i<=d; i++){
        int store = n*i;
        st.insert(store);
    }

    int sum=0;
    for(auto it:st){
        sum += it;
    }
    cout<<st.size();

    return 0;
}