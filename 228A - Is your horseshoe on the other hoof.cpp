#include <iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    for(int i=1;i<=4;i++){
            int a;
            cin>> a;
            s.insert(a);
        }
        cout << 4-s.size() << endl;
        return 0;
}
