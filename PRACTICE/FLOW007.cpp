#include <iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0 ; i < N ; i++){
	    int num;
        string s;
	    cin >> num;
	    while(num > 0){
	        int lastDigit = num%10;
            s+= to_string(lastDigit);
    	    num = num/10;
	    }cout << stoi(s) <<endl;
	}
	return 0;
}
