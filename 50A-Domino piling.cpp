#include<iostream>
 
using namespace std;
 
int main(){
    int M,N;
    cin >> M >> N ;
    int ans = (M*N)/2 ;
    if(M>=1 && M<=16 && N>=1 && N<=16){
        cout << ans << endl;
    }
}