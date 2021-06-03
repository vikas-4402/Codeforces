#include <iostream>
#include<set>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    set <char> sc;
    if(n<26){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isupper(c)){
                c=tolower(c);
            }
            sc.insert(c);
        }
        if(sc.size()==26){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
