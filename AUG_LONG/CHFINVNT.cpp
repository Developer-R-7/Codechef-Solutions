#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,k;
    cin >> n >> p >> k;
    int y = (n-1) - ((n-1)/k)*k;
    int x = p % k;
    int ans = 0;
    if(x >y){
        ans = (((n-1)/k) * x )+ y + 1;
    }
    else{
        ans = x * (((n-1)/k) + 1);
    }
    for (int i = 4; i < n-1; i = i+k)
    {
        ans=ans+1;
        if (i==p){
            cout << ans <<endl;
            break;
        }
        
    }
    
    
    
}