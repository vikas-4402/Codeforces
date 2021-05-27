#include<iostream>
#include<set>
 
using namespace std;
 
int main(){
    string str ;
    int n=1;
    multiset<int> s;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i]== '1'){
            s.insert(1);
        }
        else if(str[i] =='2')
            s.insert(2);
        else if(str[i] == '3')
            s.insert(3);
    }
    for(int x:s){
        if(n==s.size()){
            cout << x << endl;
        }
        else{
            cout << x << "+";
        }
        n++;
    }
}