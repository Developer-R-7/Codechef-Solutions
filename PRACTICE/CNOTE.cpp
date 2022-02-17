#include<iostream>
using namespace std;

int main(){

    long long int T;
    cin >> T;

    for (long long int i = 0; i < T; i++){
        
        long long int X,Y,K,N;
        cin >> X >> Y >> K >> N;

        if (Y-X >= 0){
            cout << "LuckyChef" <<endl;
        }
        else{
            bool flag = false;
            long long int require = X-Y;
            for (long long int i = 0; i < N; i++){
                int page,price;
                cin >> page >> price;

                if (price <= K && page >= require){
                    flag = true;
                    
                }
            }

            if (flag){
                cout << "LuckyChef" <<endl;
            }else{
                cout << "UnluckyChef" <<endl;
            }
            
        }   
    }
    

    return 0;
}