#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n ;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(3,0));
    int sum_x=0,sum_y=0,sum_z=0;
    for(int i=0;i<n;i++)
    {
        int x=0,y=0,z=0;
        cin>> x >> y >> z;
        v[i][0]=x;
        v[i][1]=y;
        v[i][2]=z;
    }
    for(int i=0;i<n;i++)
    {
        sum_x += v[i][0];
        sum_y += v[i][1];
        sum_z += v[i][2];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}