#include <iostream>
using namespace std;
int main() {
    int t;cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;
        if((b-a)%10==0){
            cout << abs((b-a)/10)<<endl;
        }
        else
            cout << abs((b-a)/10)+1 << endl;
    }
    return 0;
}