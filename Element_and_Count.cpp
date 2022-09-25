#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp[n];
    vector<int> v(10001,0);
    for(int i=0;i<n;i++){
        cin>>sp[i];
    }
    for(int j=0;j<n;j++){
        if(v[sp[j]]==0){
            cout<<sp[j]<<" "<<count(sp,sp+n,sp[j])<<" ";
        }
        v[sp[j]]=1;
    }
    return 0;
}