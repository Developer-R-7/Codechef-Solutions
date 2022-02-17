#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	for(int i = 0 ; i < N ; i++){
        int n;
        cin>>n;
        int sum = 0;
        while (n > 0){
            sum+=n%10;
            n = n / 10;
        }
		cout << sum << endl;
	}
	return 0;
}
