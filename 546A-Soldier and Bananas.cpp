#include<iostream>
#include<vector>

using namespace std;

int main(){
    int k,w;
    long long n;
    cin >> k >> n >> w ;
    long long ans;
    long long total;
    total = (k*w*(w+1))/2;
    ans = total-n;
    if (ans>=0){
        cout << ans << endl;
    }
    else 
        cout << 0 << endl;
}