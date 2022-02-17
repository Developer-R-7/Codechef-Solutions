#include<iostream>
#include<string>
#include <vector>
using namespace std;


int main(){

    int T;
    cin >> T;
    char hole[6] = {'A','D','O','P','R','B','Q'};
    for (int i = 0; i < T; i++){
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < s.length(); j++){
            for (int z = 0; z < 6 ; z++){
                if (s[j] == hole[z]){
                    if (s[j] == 'B'){
                        count+=2;
                    }else{
                        count+=1;
                    }
                }
                
            }
        }
        cout << count <<endl;

    }
    return 0;


}