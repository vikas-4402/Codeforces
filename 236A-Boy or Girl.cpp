#include<iostream>
#include<set>
 
using namespace std;
 
int main(){
    string str;
    cin >> str ;
    int n=str.length();
    set<char> s;
    for(int i=0;i<n;i++){
        char a=str[i];
        s.insert(a);
    }
    if((s.size())%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;
}