#include<iostream>
 
using namespace std;
 
int main(){
    int n,h;
    int ans=0;
    cin >> n >> h;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        if(k>h){
            ans+=2;
        }
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}