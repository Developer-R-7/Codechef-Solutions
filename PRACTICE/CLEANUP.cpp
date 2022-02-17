#include <iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int n,m;
        cin >> n >> m;
        // N = Total number of jobs
        // M = Jobs Already done
        // 1 2 3 4 5 6
        // 2 4 1 -- 3 5 6
        // CHEF 3 6
        //ASSITANT 5
        vector <int> assitant;
        vector <int> chef;
        vector <int> remaining;

        int finished[m];
        for (int j = 0; j < m; j++){
            int elem;
            cin >> elem;
            finished[j] = elem;
        }

        for (int z = 0; z < n; z++){
            for (int a = 0; a < m; a++){
                if (z != finished[a]){
                    remaining.push_back(z);
                }
            }
            
        }
        for (int x = 0; x < remaining.size(); x++){
            cout << remaining[x] << " ";
        }
    }
    
    return 0;
}