#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,p;
    cin>>n;
    int a[n][n];
    int b[n][n],c[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>b[i][j];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
   c[i][j]=abs(a[i][j]-b[i][j]);
   for(s=0;s<n;s++){
    for(p=0;p<n-1;p++){
    cout<<c[s][p]<<" ";
    }
    cout<<c[s][p];
    cout<<endl;
   }
    return 0;
}