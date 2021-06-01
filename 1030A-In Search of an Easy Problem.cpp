#include <iostream>
 
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
int main() {
    int n;
    string ans ="EASY";
    cin >> n ;
    int arr[n];
    FOR(i,n){
        cin >> arr[i];
        if(arr[i]==1){
            ans ="HARD";
        }
    }
    cout << ans << endl;
    return 0;
}
