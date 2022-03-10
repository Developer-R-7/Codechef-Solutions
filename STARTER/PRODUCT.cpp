#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;

    for (long long int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j + 1] != s[j])
            {
                count++;
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}