#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = sum+a[i];
        }
        if(sum%n==0){
            int k= sum/n;
            int ans=0;
            for(int i=0;i<n;i++){
                if(a[i]>k){
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
