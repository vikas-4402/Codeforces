#include <iostream>
#include<set>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n =s.size();
    int ans=0;
    set<char> s1;
    for(int i=1;i<n;i=i+3){
        char c=s[i];
        if(c>='a' && c<='z'){
            s1.insert(c);
        }
    }
    ans= s1.size();
    cout << ans << endl;
    return 0;
}
