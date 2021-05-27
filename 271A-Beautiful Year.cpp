#include<iostream>
#include<set>
using namespace std;
 
int distinct(int n){
    set <int> s;
    while(n){
        int k = n%10;
        s.insert(k);
        n=n/10;
    }
    if(s.size()==4){
        return 1;
    }
    else
        return 0;
}
 
int main(){
    int n;
    cin >> n;
    while(n++){
        if(distinct(n)){
            cout << n << endl;
            break;
        }
    }
    return 0;
}