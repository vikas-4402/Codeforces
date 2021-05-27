#include<iostream>
 
using namespace std;
 
int main(){
    long long n,m,a;
    unsigned long long ans ;
    cin >> n >> m >> a;
    int k=n%a;
    if(k!=0){
        n += (a-k);
    }
    int p=m%a;
    if(p!=0){
        m +=(a-p);
    }
    ans = (m/a)* (n/a);
    cout << ans << endl ;
}