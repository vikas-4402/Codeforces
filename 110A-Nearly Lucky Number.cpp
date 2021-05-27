#include<iostream>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    int ans=0;
    string s="NO";
    while(n){
        int rem=n%10;
        if(rem==4 || rem ==7){
            ans++;
        }
        n=n/10;
    }
    while(ans){
        int rem = ans%10;
        if(rem==4 || rem ==7){
            s ="YES";
            ans =ans/10;
        }
        else {
            s="NO";
            break;
        }
    }
    cout << s << endl;
    return 0;
}