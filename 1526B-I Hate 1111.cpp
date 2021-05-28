#include<iostream>
 
using namespace std;
 
int main(){
    int t ;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a,b;
        a=n/11;
        b=n%11;
        if(a>=10*b){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
	return 0;
}