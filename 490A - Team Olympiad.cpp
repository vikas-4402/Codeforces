#include<iostream>
#include<vector>
using namespace std;
void test_case(){
    int n; cin >> n;
    int a[n];
    vector <int> x,y,z;
    int p=0,q=0,r=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==1){
            p++;
            x.push_back(i+1);
        }
        else if(a[i]==2){
            q++;
            y.push_back(i+1);
        }
        else{
            r++;
            z.push_back(i+1);
        }
    }
    int ans;
    int h= min(p,q);
    ans =min(h,r);
    cout << ans << endl;
    for(int i=0;i<ans;i++){
        cout << x[i] << " " << y[i] << " " << z[i] << endl;
    }
}

int main(){
    test_case();
	return 0;
}
