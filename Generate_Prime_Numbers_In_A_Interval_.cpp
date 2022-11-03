#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==0 || n==1)
    return false;
    int s=(int)sqrt(n);
    for(int i=2;i<s+1;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int s,e;
    cin>>s;
    cin>>e;
    for(int i=s+1;i<e;i++){
        if(isprime(i))
        cout<<i<<endl;
    }
    return 0;
}