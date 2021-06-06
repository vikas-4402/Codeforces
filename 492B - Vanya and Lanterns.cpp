#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <iomanip> 
using namespace std;

int main() {
    long long d,l;
    cin >> l >> d;
    vector <long long> v;
    long double dmax=0;
    for(long long i=0;i<l;i++){
        long long k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.rbegin(),v.rend());
    for(long long i=0;i<l-1;i++){
        long long temp = v[i]-v[i+1];
        if(temp>dmax){
            dmax =temp;
        }
    }
    long long a = v[l-1];
    long long b = d-v[0];
    long long c= max(a,b);
    if(2*c>=dmax){
        cout << setprecision(10) << c << '\n';
    }
    else{
        cout << setprecision(10) << dmax/2 << '\n';
    }
    return 0;
}
