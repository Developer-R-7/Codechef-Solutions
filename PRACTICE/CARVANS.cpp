#include <iostream>
using namespace std;


int main(){

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        int count = 1;
        cin >> N;
        int arr[N];


        for (int j = 0; j < N; j++){
            int ele;
            cin >> ele;
            arr[j] = ele;
        }
        int min = arr[0];
        for (int z = 1; z < N ; z++){
            
            if (arr[z] <= min){
                count+=1;
            }

            if (arr[z] < min){
                min = arr[z];
            }
        }




        cout << count << endl;


        
        
    }
    

    return 0;
}