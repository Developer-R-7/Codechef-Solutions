#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int arr[3];
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        sort(arr, arr + 3);
        cout << sum - arr[0] << endl;
    }

    return 0;
}