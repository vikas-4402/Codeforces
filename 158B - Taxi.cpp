#include <iostream>

using namespace std;
int main() {
    int n;cin >> n;
    int ans=0;
    int a4=0,a3=0,a2=0,a1=0;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        if(a==4){
            a4++;
        }
        else if(a==3){
            a3++;
        }
        else if(a==2){
            a2++;
        }
        else
            a1++;
    }
    ans+=a4;
    if(a3>=a1){
        ans+=a3;
        if(a2%2==0){
            ans+=(a2/2);
        }
        else{
            ans+=(a2-1)/2;
            ans++;
        }
    }
    else{
        ans+=a3;
        a1-=a3;
        if(a2%2==0){
            ans+=(a2/2);
            if(a1>4){
                if(a1%4==0){
                    ans+=(a1/4);
                }
                else{
                    ans+=(a1/4)+1;
                }
            }
            else
                ans++;
        }
        else{
            ans+=(a2-1)/2;
            ans++;
            if(a1>2){
                a1-=2;
                if(a1>4){
                    if(a1%4==0){
                        ans+=a1/4;
                    }
                    else{
                        ans+=(a1/4)+1;
                    }
                }
                else
                    ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
