#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,o=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       if(i%2!=0) 
       o+=arr[i];
    }
    cout<<o;
    return 0;
}