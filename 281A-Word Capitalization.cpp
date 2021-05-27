#include<iostream>
 
using namespace std;
 
int main(){
    string str ;
    cin >> str;
    char c=str[0];
    if(islower(c)){
        str[0]=toupper(c);
    }
    cout << str << endl;
}