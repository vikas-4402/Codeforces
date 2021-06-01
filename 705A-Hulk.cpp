#include <iostream>

using namespace std;
#define FOR(i,n) for(int i=1;i<=n;i++)
int main() {
    int n;
    string ans ="";
    cin >> n ;
    FOR(i,n){
        if(i==n){
            if(i%2!=0){
                ans+="I hate it";
            }
            else
                ans+="I love it";
        }
        else if(i%2!=0){
            ans+="I hate that ";
        }
        else
            ans+="I love that ";
    }
    cout << ans << endl;
    return 0;
}
