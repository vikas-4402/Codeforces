#include <iostream>
 
using namespace std ;
 
int main()
{
    int n,t ;
    cin >> t ;
    for(int r=1 ; r<=t ;r++){
        cin >> n ;
        int arr[n] = {};
        for(int i= 0; i<n ; i++){
 
            cin >> arr[i];
        }
        if (n >= 3 && n <=100){
        for(int p = 0 ;p < n ; p++)
        {
        int j = 0;
        for(int k = 0 ; k<n ; k++){
            if(k != p){
                if (arr[k] != arr[p]){
                    j++;
                }
            }
        }
    if (j == n-1){
        cout << p+1 <<endl ;
        }
        }
    }
    }
}