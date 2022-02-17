#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int max(int a , int b){
    if(a<b){
        return b;
    }
    return a;
}

void log(int num){
    cout << num <<endl;
}

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;


        if(max((max(a,b)),c) == a){
            if(b < c){
                log(c);
            }
            else{
                log(b);
            }
        }
        else if (max((max(a,b)),c) == b){
            if(a < c){
                log(c);
            }
            else{
                log(a);
            }
        }
        else if (max((max(a,b)),c) == c) {
            if(b < a){
                log(a);
            }
            else{
                log(b);
            }
        }
    }
    
    return 0;
}