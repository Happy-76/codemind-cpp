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
            if(arr[i-1]%2==0 && arr[i+1]%2!=0)
            c++;
            else if(arr[i-1]%2!=0 && arr[i+1]%2==0)
            c++;
        }
        else if(i==0){
            if(arr[n-1]%2==0 && arr[1]%2!=0)
            c++;
            else if(arr[n-1]%2!=0 && arr[1]%2==0)
            c++;
        }
        else if(i==n-1){
            if(arr[n-2]%2==0 && arr[0]%2!=0)
            c++;
            else if(arr[n-2]%2!=0 && arr[0]%2==0)
            c++;
        }
    }
    cout<<c;
    return 0;
}