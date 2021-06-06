#include <iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t; cin>> t;
    while(t--){
        int m,n;
        vector <int> s;
        vector <int> a;
        for(int i=0;i<4;i++){
            int k;
            cin >> k;
            s.push_back(k);
            a.push_back(k);
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<4;i++){
            if(s[i]==a[0]){
                m=i+1;
            }
            if(s[i]==a[1]){
                n=i+1;
            }    
        }
        if(m+n<7 && m+n>3){
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
    return 0;
}
