#include <iostream>

using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;

        if (21 - (a + b) > 10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 21 - (a + b) << endl;
        }
    }

    return 0;
}