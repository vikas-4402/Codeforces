#include <iostream>
using namespace std;

int main() {
    int n;cin>> n;
    int a[n];
    int c=0,ans=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>0){
            c=c+a[i];
        }
        else{
            if(c+a[i]>=0){
                c--;
            }
            else
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}