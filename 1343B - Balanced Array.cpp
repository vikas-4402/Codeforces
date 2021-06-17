#include<iostream>

using namespace std;
void test_case(){
    int n;cin >> n;
    if((n/2)%2==1){
        cout << "NO" << endl;
        return ;
    }
    else{
        cout << "YES" << endl;
        for(int i=1;i<=n/2;i++){
            cout << 2*i << " ";
        }
        for(int i=0;i<n/2-1;i++){
            cout << 2*i+1 << " ";
        }
        cout << ((3*n)/2)-1 << endl;
    }
    return;
}

int main(){
    int t; cin >> t;
    while(t--){
        test_case();
    }
	return 0;
}
