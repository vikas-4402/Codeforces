#include<iostream>
 
using namespace std;
 
int main(){
    int x=0;
    string str;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> str ;
        if(str=="++X" || str =="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x <<endl ;
}