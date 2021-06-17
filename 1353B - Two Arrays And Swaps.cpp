#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test_case(){
    int n,k; cin >> n >>  k;
    vector <int> a(n);
    vector <int> b(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum +=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int p=1;
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            break;
        }
        if(p<=k){
            if(a[i]<b[i]){
                p++;
                sum=sum-a[i];
                sum+=b[i];
            }
        }
        else{
            break;
        }
    }
    cout << sum << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        test_case();
    }
	return 0;
}
