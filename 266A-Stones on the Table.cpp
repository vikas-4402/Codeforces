#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    string str;
    int ans=0;
    cin >> n >> str ;
    for(int i=0;i<(n-1);i++){
        int a=str[i];
        int b=str[i+1];
        if(a == b){
            ans++;
        }
    }
    cout << ans << endl;
}