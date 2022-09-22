#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,e=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0) e++;
    }
    for(int j=1;j<n;j+=2){
        if(arr[j]%2==0){
            c=1;
            break;
        }
    }
    if(e>0 && c==0) cout<<"True";
    else cout<<"False";
    return 0;
}