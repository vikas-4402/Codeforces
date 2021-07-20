#include<iostream>
#include<limits.h>
using namespace std;
void test_case(){
    int n; cin >> n;
    int a[n];
    int p=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>p){
            p=a[i];
        }
        sum+=a[i];
    }
    long long ans = n*p-sum;
    cout << ans << endl;
}

int main(){
    test_case();
	return 0;
}
