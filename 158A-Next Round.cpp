#include<iostream>
 
using namespace std;
 
int main(){
    int n,k;
    int ans=0;
    cin >> n >> k ;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin >> arr[i] ;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1]){
            if(arr[i]>0){
                ans++;
            }
        }
    }
    cout << ans << endl;
}