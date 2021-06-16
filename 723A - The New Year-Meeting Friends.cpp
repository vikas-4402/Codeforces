#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x[3];
    for(int i=0;i<3;i++){
        cin >> x[i];
    }
    sort(x,x+3);
    int m=x[1];
    int ans = abs(m-x[0])+abs(m-x[2]);
    cout << ans << endl;
}
