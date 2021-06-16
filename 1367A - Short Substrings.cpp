#include <iostream>
using namespace std;

int main() {
    int t;cin>> t;
    while(t--){
        string s;cin >> s;
        int n=s.size();
        string ans;
        ans= ans+s[0];
        for(int i=1;i<n-1;i=i+2){
            ans = ans+s[i];
        }
        ans= ans+s[n-1];
        cout << ans << endl;
    }
    return 0;
}
