#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    int ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int k,l;
        cin >> k >> l;
        if(l-k>=2){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}