#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,count=0;
    int ans=0;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=1;i<=n;i++){
        cin >> a[i-1] >> b[i-1];
        int x=count ;
        count = count+b[i-1]-a[i-1];
        int y=count;
        if(ans<=y){
            ans=y;
        }
    }
    cout << ans << endl;
}