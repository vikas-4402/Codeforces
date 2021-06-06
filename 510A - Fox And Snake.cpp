#include <iostream>

using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    for(int k=1;k<=n;k++){
        if(k%2!=0){
            for(int i=0;i<m;i++){
                cout << "#" ;
            }
            cout <<  endl;
        }
        else if(k%4!=0){
            for(int i=0;i<m-1;i++){
                cout << ".";
            }
            cout << "#" << endl;
        }
        else{
            cout << "#";
            for(int i=0;i<m-1;i++){
                cout << "." ;
            }
            cout << endl;
        }
    }
    return 0;
}
