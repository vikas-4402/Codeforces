#include <iostream>
using namespace std;

int main() {
    int k,r; cin >> k>> r;
    long long n=k;
    int ans=1;
    while((n-r)%10!=0 && n%10!=0){
        ans++;
        n=k*ans;
    }
    cout << ans << endl;
    return 0;
}