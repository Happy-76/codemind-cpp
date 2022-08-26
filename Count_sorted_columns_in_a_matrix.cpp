#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> v){
    int c=0;
    int x = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] >= v[i-1]) c++;
    }
    for (int i = 1; i < v.size(); i++) {
        if (v[i] <= v[i-1]) x++;
    }
    
    return (x == v.size() - 1 || c == v.size() - 1);
}
int main(){
    int n,m,c=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<m;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(a[j][i]);
        }
        if(check(v))
        c++;
    }
    cout<<c;
    return 0;
}