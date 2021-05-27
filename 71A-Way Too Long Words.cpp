#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    string word;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> word;
        int n = word.length();
        if (n<=10){
            cout << word << endl;
        }
        else {
            cout<<word[0] << n-2 <<word[n-1] << endl;
        }
    }
}