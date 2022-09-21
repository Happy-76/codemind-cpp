#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int s,e,c=0;
    cin>>s;
    cin>>e;
    for(int i=s;i<=e;i++){
        if(check(i)) c++;
    }
    cout<<c;
    return 0;
}