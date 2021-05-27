#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int ans;
    int r = n%5;
    if(r==0){
        ans = n/5;
    }
    else{
        ans=((n-r)/5)+1;
    }
    cout << ans << endl;
}