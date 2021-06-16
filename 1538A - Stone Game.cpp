#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        int high=0,low=101;
        int hp,lp;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==n){
                hp=i+1;
                high=a[i];
            }
            if(a[i]==1){
                lp=i+1;
                low=a[i];
            }
        }
        if(n%2==0){
            int b=abs(hp-lp);
            if(lp>n/2){
                lp=n-lp+1;
            }
            if(hp>n/2){
                hp=n-hp+1;
            }
            ans = ans+min(lp,hp);
            if(b<max(lp,hp)){
                ans = ans+b;
            }
            else{
                ans= ans+max(lp,hp);
            }
        }
        else{
            int b=abs(hp-lp);
            if(lp>(n+1)/2){
                lp=n-lp+1;
            }
            if(hp>(n+1)/2){
                hp=n-hp+1;
            }
            ans = ans+min(lp,hp);
            if(b<max(lp,hp)){
                ans = ans+b;
            }
            else{
                ans= ans+max(lp,hp);
            }            
        }
        cout << ans << endl;
    }
    return 0;
}
