#include<iostream>
#include<set>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        multiset<int> s;
        cin >> n;
        for(int i=0;i<n;i++){
            int k;
            cin >> k ;
            s.insert(k);
        }
        auto it =s.begin();
        int l = s.count(*it);
        cout << n-l << endl;
    }
    return 0;
}