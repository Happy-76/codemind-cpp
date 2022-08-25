#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0,add=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        //cout<<"
";
    }
    for(int i=0;i<n;i++){
        sum+=a[i][i];
        if(i != (n-i-1))
        add+=a[i][n-1-i];
    }
    cout<<sum+add<<endl;
    return 0;
}
