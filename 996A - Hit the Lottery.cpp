#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int ans=0;
    while(n){
        if(n/100!=0){
            int k=n/100;
            ans +=k;
            n=n%100;
        }
        else if(n/20!=0){
            int k=n/20;
            ans+=k;
            n=n%20;
        }
        else if(n/10!=0){
            int k=n/10;
            ans+=k;
            n=n%10;
        }
        else if(n/5!=0){
            int k=n/5;
            ans+=k;
            n=n%5;
        }
        else{
            ans+=n;
            n=0;
        }
    }
    cout << ans << endl;
    return 0;
}
