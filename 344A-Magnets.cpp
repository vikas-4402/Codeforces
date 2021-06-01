#include <iostream>

using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
int main() {
    int n,ans=1;
    cin >> n ;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
        if(i>0){
            if(arr[i]!= arr[i-1]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
