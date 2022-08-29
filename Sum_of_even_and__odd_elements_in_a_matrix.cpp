#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int eve=0,odd=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0)
            eve+=a[i][j];
            else
            odd+=a[i][j];
        }
    }
    cout<<eve<<" "<<odd;
    return 0;
}