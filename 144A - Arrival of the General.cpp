#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;cin >> n;
    int high=0,low=100,a=0,b=0;
    vector <int> v;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back(k);
        if(v[i]<=low){
            low = v[i];
            a=i;
        }
        if(v[i]>high){
            high =v[i];
            b=i;
        }
    }
    if(b<a){
        int ans = b+n-(a+1);
        cout << ans << endl;
    }
    else if(b>a){
        cout << b+n-a-2 << endl;
    }
    return 0;
}
