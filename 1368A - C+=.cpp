#include <iostream>

using namespace std;
int main() {
    int t;cin >> t;
    while(t--){
        int a,b,n;cin>>a >> b>> n;
        int ans=0;
        while(a<=n && b<=n){
            if(a>=b){
                b+=a;
                ans++;
            }
            else{
                a+=b;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
