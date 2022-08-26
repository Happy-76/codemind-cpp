#include<bits/stdc++.h>
using namespace std;
int send(int a[],int s){
    for(int i=s-1;i>0;i--){
        if(a[i]%2!=0)
        return i;
    }
    return -1;
}
int main(){
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<send(a,s);
    return 0;
}