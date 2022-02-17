#include<iostream>
#include<string>
using namespace std;


int main(){
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        string s;
        cin >> s;
        int first = s[0]-48;
        int last = s[s.length()-1]-48;
        cout << first + last << endl; 
    }
    
}