#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n, k;
        int minNote = INT32_MAX;
        cin >> n >> k;

        int sum = 0;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            minNote = min(minNote, arr[j]);
            sum += arr[j];
        }
        if (sum % k >= minNote)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << sum / k << endl;
        }
    }

    return 0;
}