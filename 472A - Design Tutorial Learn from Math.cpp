#include <iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;cin>>n;
    if(n%2==0){
        int a= n/2;
        for(int i=a;i>3;i--){
            int b=n-i;
            if(isprime(i)+isprime(b)==0){
                cout << i << " " << b << endl;
                break;
            }
        }
    }
    else{
        int a= n-1/2;
        for(int i =a;i>3;i--){
            int b=n-i;
            if(isprime(i)+isprime(b)==0){
                cout << i << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}