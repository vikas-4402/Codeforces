#include<iostream>
 
using namespace std;
 
int main(){
    int arr[5][5];
    int a,b,ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                 a=i+1;
                 b=j+1;
            }
        }
    }
    if(a>3){
        if(b>3){
            ans =a+b-6;
        }
        else{
            ans=a-b;
        }
    }
    else{
        if(b>3){
            ans =b-a;
        }
        else{
            ans= 6-a-b;
        }
    }
    cout << ans << endl;
    return 0;
}