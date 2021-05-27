#include<iostream>
using namespace std;
 
int main()
{
    string v,ans="NO";
    cin >> v ;
    int n =v.size();
    for(int i=0;i<n;i++){
        if(v[i]=='h'){
            for(int k=i+1;k<n;k++){
                if(v[k]=='e'){
                    for(int j=k+1;j<n;j++){
                        if(v[j]=='l'){
                            for(int l=j+1;l<v.size();l++){
                                if(v[l]=='l'){
                                    for(int m=l+1;m<n;m++){
                                        if(v[m]=='o'){
                                            ans = "YES";
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}