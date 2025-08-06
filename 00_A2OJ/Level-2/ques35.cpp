#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int s1, s2, s3;
    cin>>s1>>s2>>s3;

    int l,b,w;
    
    int rootInput = (s2*s3)/s1;
    
    w = sqrt(rootInput);
    l = s3/w;
    b = s2/w;

    cout<<4*(l+w+b);

    
    return 0;
}