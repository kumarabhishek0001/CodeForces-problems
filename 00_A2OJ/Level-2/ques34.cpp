#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void day(int pagesCount){

    int pagesReadPerDay[7];

    for(int i=0; i<7; i++){
        int pagesRead;
        cin>>pagesRead;

        pagesReadPerDay[i] = pagesRead;
    }

    int dayCount = 0;

    while(pagesCount>0){
        for(int i=0; i<7; i++) {
            pagesCount = pagesCount - pagesReadPerDay[i];
            dayCount++;

            if(pagesCount<=0) break;
        }
    }

    if(dayCount%7 == 0) cout<<7;
    else cout<<dayCount%7;
   

}

int main(){
    
    int n;
    cin>>n;

    day(n);
    return 0;
}