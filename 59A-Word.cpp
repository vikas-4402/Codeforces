#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a=0,b=0;
    string str;
    cin >> str;
    int n= str.length();
    for(int i=0;i<n;i++){
        char c = str[i];
        if(islower(c)){
            a++;
        }
        else
            b++;
    }
    if(b>a){
        for(int i=0;i<n;i++){
            char c=str[i];
            if(islower(c)){
                str[i]=toupper(c);
            }
        }
    }
    else if(a>=b){
        for(int i=0;i<n;i++){
            char c=str[i];
            if(isupper(c)){
                str[i]=tolower(c);
            }
        }
    }
    cout << str << endl;
}