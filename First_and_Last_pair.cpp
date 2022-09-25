#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp[n];
    for(int i=0;i<n;i++){
        cin>>sp[i];
    }
    for(int i=0;i<=n/2;i++){
        if(n%2!=0){
            if(i==n/2){
                cout<<sp[i]<<" "<<0<<" ";
            }
            else{
                cout<<sp[i]<<" "<<sp[n-1-i]<<" ";
            }
        }
        else{
            if(i==n/2) break;
            cout<<sp[i]<<" "<<sp[n-1-i]<<" ";
        }
    }
    return 0;
}