#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
 
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<ll> v(2*n),ans(2*n);
        for(ll i=0;i<2*n;i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(ll i = 0; i < n; ++i) {
            ans[2 * i] = v[i];
        }
        for(ll i = 0; i < n; ++i) {
            ans[2 * i + 1] = v[i + n];
        }
        for(ll i = 0; i < 2 * n; ++i) {
            cout << ans[i] << " ";
        }
    }
	return 0;
}