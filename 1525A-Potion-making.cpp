#include<iostream>
#include<algorithm>
using namespace std;

void reduceFraction(int x, int y){
	int d;
    d = __gcd(x, y);
	x = x / d;
	y = y / d;

	cout << x+y << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x ;
        y= 100-x;
        reduceFraction(x, y);
    }
	return 0;
}
