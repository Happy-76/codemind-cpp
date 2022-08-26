#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0,maxi = 0;
    cin>>n>>m;
    int a[n][m];
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        v.emplace_back(sum);
        sum =0;
    }
   for(int i=0;i<v.size();i++)
   cout<<v[i];
   return 0;
}