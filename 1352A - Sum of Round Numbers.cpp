#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector <int> v;
        int a=10;
        int ans=0;
        while(n>0){
            int b = n%a;
            if(b!=0){
                ans++;
                v.push_back(b);
            }
            a*=10;
            n=n-b;
        }
        cout << ans << endl;
        for(auto x:v){
            cout << x << " " ;
        }
        cout << endl;
    }
    return 0;
}
