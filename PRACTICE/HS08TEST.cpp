#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int withdraw;
    float charge = 0.5;
    double balance;
	cin >> withdraw >> balance;
	if (withdraw%5 == 0 && withdraw < balance){
        cout << fixed << setprecision(2) << (balance-withdraw)-charge <<endl;
    }
    else{
        cout << fixed << setprecision(2) << balance;
    }
    
	return 0;
}
