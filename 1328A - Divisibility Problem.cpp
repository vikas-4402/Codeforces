#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int k;
        k=a%b;
        int ans;
        ans = abs(b-k);
        if(k!=0){
            cout << ans << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
