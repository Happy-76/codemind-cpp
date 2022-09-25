#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp[n];
    for(int i=0;i<n;i++){
        cin>>sp[i];
    }
    for(int i=0;i<n;i+=2){
        if(n%2!=0){
            if(i==n-1){
                cout<<sp[i]<<" "<<0<<" ";
            }
            else{
                cout<<sp[i]<<" "<<sp[i+1]<<" ";
            }
        }
        else{
            if(i==n-1) break;
            cout<<sp[i]<<" "<<sp[i+1]<<" ";
        }
    }
    return 0;
}