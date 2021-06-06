#include <iostream>

using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int q=0;
    int time_left = 240 - k;
    int time_taken = 0;
    while(time_left>=time_taken){
        if(q>n){
            break;
        }
        q++;
        time_taken+=5*q;
    }
    cout << q-1 << endl;
    return 0;
}
