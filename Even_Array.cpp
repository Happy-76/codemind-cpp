#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            c++;
        }
    }
    if(c==n) cout<<"True";
    else cout<<"False";
    return 0;
}