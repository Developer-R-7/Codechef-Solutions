#include <iostream>
#include <unordered_set>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int getMinimumOperations(string first, string second)
{
    // to keep track of the minimum number of operations required
    int count = 0;
    for (int i = first.length() - 1, j = i; i >= 0; i--, j--)
    {
        while (i >= 0 && first[i] != second[j])
        {
            i--;
            count++;
        }
    }

    // return the minimum operations required
    return count;
}

int main()
{
    long long int T;
    cin >> T;

    for (long long int i = 0; i < T; i++)
    {
        string s;
        cin >> s;
        string first = s;
        reverse(s.begin(), s.end());
        string second = s;
        cout << first << endl;
        cout << second << endl;
        cout << getMinimumOperations(first, second) << endl;
    }
    return 0;
}