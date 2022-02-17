#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int N;
        cin >> N;
        int arr[N];
        for (int j = 0; j < N; j++){
            long long int ele;
            cin >> ele;
            arr[j] = ele;
        }
        sort(arr,arr+N);

        int min = 0;
        for (int z = 0; z < N; z++){
            for (int a = z; a < N; a++){
                cout << arr[a] - arr[z] <<endl;
                                
            }
        }
        cout << min <<endl;
        
        
        
    }
    

}