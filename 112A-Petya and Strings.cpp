#include<iostream>
 
using namespace std;
 
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int n=s1.length();
    for(int i=0;i<n;i++){
        if(isupper(s1[i])){
            s1[i]=tolower(s1[i]);
        }
        if(isupper(s2[i])){
            s2[i]=tolower(s2[i]);
        }
    }
    int ans = s1.compare(s2);
    cout << ans << endl;
 
    return 0;
}