#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0) o++;
    }
    for(int j=0;j<n;j+=2){
        if(arr[j]%2!=0){
            c=1;
            break;
        }
    }
    if(o>0 && c==0) cout<<"True";
    else cout<<"False";
    return 0;
}