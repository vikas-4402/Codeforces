#include<iostream>
#include<cmath>
using namespace std;
int Max(int n, int a, int b, int c){
	int ans = 0;
	for (int i = 0; i <= n; i += a){
		for (int j = 0; j <= n - i; j += b){
			float z = (float)(n - (i + j)) / (float)(c);
			if (floor(z) == ceil(z)){
				int x = i / a;
				int y = j / b;
				ans = max(ans, x + y + (int)z);
			}
		}
	}
	return ans;
}
int main(){
	int n,a,b,c;
	cin >> n >> a >> b >> c ;
	cout << Max(n, a, b, c);
	return 0;
}
