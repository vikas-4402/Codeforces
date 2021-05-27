#include<iostream>
#include<set>
 
using namespace std;
 
int main(){
    int n;
    int sum=0,rem=0;
    int ans=0;
    cin >> n;
    multiset<int> s;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        sum += k;
        s.insert(k);
    }
    while(sum>=rem){
        auto it = s.end();
        it--;
        int k=*it;
        ans++;
        sum-=k;
        rem+=k;
        s.erase(it);
    }
    cout << ans << endl;
    return 0;
}