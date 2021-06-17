#include<iostream>

using namespace std;
void test_case(){
    int n,k; cin >> n >>  k;
    int num=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]+k<=5){
            num++;
        }
    }
    int ans = num/3;
    cout << ans << endl;
    return;
}

int main(){
    test_case();
	return 0;
}
