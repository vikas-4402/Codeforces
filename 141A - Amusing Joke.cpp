#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    string s1,s2;
    string s;
    cin >> s1 >> s2 >> s;
    string n = s1+s2;
    sort(n.begin(),n.end());
    sort(s.begin(),s.end());
    if(n==s){
        cout << "YES"  << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
