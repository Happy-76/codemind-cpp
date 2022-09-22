#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int g){
    int e =sqrt(n);
    if(n==1 || n>g)return false;
    for(int i=2;i<=e;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,c=0,o=0,g;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>g;
    for(int j=0;j<n;j++){
        if(prime(arr[j],g)){
            c++;
        }
    }
    cout<<c;
    return 0;
}