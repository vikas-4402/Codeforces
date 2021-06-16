#include <iostream>
using namespace std;

int main() {
    int x[4];
    int h=0;
    for(int i=0;i<4;i++){
        cin>> x[i];
        if(x[i]>h){
            h=x[i];
        }
    }
    for(int i=0;i<4;i++){
        if(h-x[i]!=0){
            cout << h-x[i] << " " ;
        }
    }
    cout << endl;
    return 0;
}