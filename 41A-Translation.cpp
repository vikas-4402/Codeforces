#include<iostream>
using namespace std;
void compare(string a,string b){
    if(a==b){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main(){
    string s;
    string ans=s;
    string input;
    cin >> s >> input;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    compare(s,input);
    return 0;
}