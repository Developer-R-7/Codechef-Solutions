#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a ,b ,c ,d ;
        cin >> a >> b >> c >> d;
        int arr[4] = {a,b,c,d};
        sort(arr,arr+4);
        if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] ==  arr[3]){
            cout << 0 << endl;

        }
        else if (arr[0] == arr [1] && arr[1] == arr[2] || arr[1]==arr[2] && arr[2]==arr[3])
        {
            cout << 1 << endl;
        }
        else{
            cout << 2 <<endl;
        }
    }
    
}