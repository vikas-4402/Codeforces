#include <iostream>

using namespace std;
int main() {
    int n;cin >> n;
    int a[n];
    cin>> a[0];
    int high=a[0];
    int low=a[0],ans=0;
    for(int i=1;i<n;i++){
        cin >> a[i];
        if(a[i]>high){
            ans++;
            high=a[i];
        }
        else if(a[i]<low){
            ans++;
            low=a[i];
        }
    }
    cout << ans<< endl;
    return 0;
}
