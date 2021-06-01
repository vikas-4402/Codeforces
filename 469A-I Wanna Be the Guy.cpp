#include <iostream>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    set <int> s;
    int p,q;
    cin >> p;
    for(int i=1;i<=p;i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    for(int i=1;i<=q;i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    if(s.size()==n){
        cout << "I become the guy." << endl;
    }
    else
        cout <<  "Oh, my keyboard!" << endl;
    return 0;
}
