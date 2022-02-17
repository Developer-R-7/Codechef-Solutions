
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int product = 1;
    for (int i = 2; i <= n; i++){
        product*=i;
    }
    return product;
    
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long int num;
        int count = 0;
        cin >> num;
        for (int j = 0; j < num; j++){
            int x = 0;
            int digitMutiplied = 1;
            while (j  > 0){
                int lastdigit = j % 10;
                digitMutiplied = digitMutiplied * lastdigit;
                j = j/10;
                x+=1;
            }
            long long int factorial = fact(x);
            if (digitMutiplied > factorial){
                count+=1;
            }
        }
        cout << count;

    }
    
}