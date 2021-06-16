#include <iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#include<list>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main() {
    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int ans=0;
        list <int> l;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0){
                l.push_front(a[i]);
            }
            else{
                l.push_back(a[i]);
            }
        }
        vector<int> res;
        for (auto x: l) {
            res.push_back(x);
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(res[i],2*res[j])>1){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
