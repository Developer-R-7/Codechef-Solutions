#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;

        if (n % 10 == 0)
        {
            cout << n / 10 << endl;
        }
        else
        {
            cout << (n / 10) + 1 << endl;
        }
    }

    return 0;
}