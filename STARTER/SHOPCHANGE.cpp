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
        cout << 100 - n << endl;
    }

    return 0;
}