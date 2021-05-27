#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    long long n;
    for(int a=0;a<t;a++){
        cin >> n;
        long long b=log2(n);
        int k = pow(2,b)-1;
        cout << k << endl;
    }
}