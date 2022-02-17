#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        int team_a = a+b+c;
        int team_b = d+e+f;
        if(team_a > team_b){
            cout << "1" <<endl;
        }
        else{
            cout << "2"<<endl;
        }

    }
    
}