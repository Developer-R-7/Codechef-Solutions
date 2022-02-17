#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int arr[N];

        for (int j = 0; j < N; j++)
        {
            int ele;
            cin >> ele;
            arr[j] = ele;
        }
        int index;
        cin >> index;
        int find;
        find = arr[index-1];
        sort(arr, arr + N);
        for (int z = 0; z < N; z++)
        {
            if (find == arr[z]){
                cout << z+1  << endl;
                break;
            }
        }
    }
    return 0;
}