#include <iostream>
#include<string>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        string s ;cin>>s;
        int n = s.size();
        int a[n][2];
        if(s[n-1]=='1'){
            a[n-1][0] = 0;
            a[n-1][1] = 1;
        }
        else if(s[n-1]=='0'){
            a[n-1][0] = 1;
            a[n-1][1] = 0;
        }
        else{
            a[n-1][0]= 1;
            a[n-1][1] = 1;
        }
        for(int i=n-2;i>=0;i--){
            if(s[i+1]=='1'){
                if(s[i]=='0'){
                    a[i][0] = a[i+1][1] + 1;
                    a[i][1] = 0;
                }
                else if(s[i]=='1'){
                    a[i][0] = 0;
                    a[i][1] = 1;
                }
                else{
                    a[i][0] = a[i+1][1] + 1;
                    a[i][1] = 1;
                }
            }
            else if(s[i+1]=='0'){
                if(s[i]=='1'){
                    a[i][1] = a[i+1][0] + 1;
                    a[i][0] = 0;
                }
                else if(s[i]=='0'){
                    a[i][0] = 1;
                    a[i][1] = 0;
                }
                else{
                    a[i][1] = a[i+1][0] + 1;
                    a[i][0] = 1;
                }
            }
            else{
                if(s[i]=='1'){
                    a[i][0] = 0;
                    a[i][1] = a[i+1][0] + 1;
                }
                else if(s[i]=='0'){
                    a[i][0] = a[i+1][1] + 1;
                    a[i][1] = 0;
                }
                else{
                    a[i][0] = a[i+1][1] + 1;
                    a[i][1] = a[i+1][0] + 1;
                }
            }
        }
     long long p= 0;
     for(int i = 0;i!=n;i++){
         if(s[i]=='?'){
                p = p + max(a[i][0],a[i][1]);
                continue;
         }
         p =  p + a[i][0] + a[i][1];
     }
     cout<<p<<"\n";
   }
    return 0;
}