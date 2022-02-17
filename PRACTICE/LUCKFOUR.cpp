#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        int count =0;
        cin >> a;
        while (a != 0)
        {
            if(a % 10 == 4){
                count++;
            }
            a = a/10;
        }
        cout << count <<endl;
        
    }
    
}