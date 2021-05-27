#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n ;
    vector <vector<int>> v;
    int sum_x=0,sum_y=0,sum_z=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>> x >> y >> z;
        vector <int> a;
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
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