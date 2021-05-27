#include<iostream>
 
using namespace std;
 
int main(){
    int n,t;
    cin >> n >> t;
    char arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    while(t--){
        for(int i=0;i<n-1;i++){
            if(arr[i]=='B'&& arr[i+1]=='G'){
                char *p1;
                char *p2;
                p1=&arr[i];
                p2=&arr[i+1];
                *p1='G';
                *p2='B';
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] ;
    }
    cout << endl;
    return 0;
}