#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i!=n-1 && i!=0){
            if(arr[i-1]%2==0 && arr[i+1]%2==0 && arr[i]%2==0)
            c++;
        }
        else if(i==0){
            continue;
        }
        else if(i==n-1){
            continue;
        }
    }
    cout<<c;
    return 0;
}