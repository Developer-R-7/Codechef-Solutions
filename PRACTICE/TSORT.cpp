#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int N;
    cin >> N;

    int arr[N];
    for (int j = 0; j < N; j++){
        int ele;
        cin >> ele;
        arr[j] = ele;
    }
    sort(arr,arr+N);

    for (int i = 0; i < N; i++){
        cout << arr[i] <<endl;
    }
    
}