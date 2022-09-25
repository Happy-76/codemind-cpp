#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int sp[n];
    vector<int> v(10001,0);
    for(int i=0;i<n;i++){
        cin>>sp[i];
    }
    for(int i=0;i<n;i++){
        if(v[sp[i]]==0){
            sum+=sp[i];
        }
        v[sp[i]]=1;
    }
    cout<<sum;
    return 0;
}