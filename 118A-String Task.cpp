#include<iostream>
 
using namespace std;
 
int main(){
    string str;
    cin >> str ;
    int n= str.length();
    for(int i=0;i<n;i++){
        char c=str[i];
        if(isupper(c)){
            str[i]=tolower(c);
        }
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'){
            continue;
        }
        else{
            cout << "." << str[i] ;
        }
    }
    cout << "\n" ;
}