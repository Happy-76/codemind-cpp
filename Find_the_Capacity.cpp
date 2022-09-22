#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s,b;
    cin>>t>>s>>b;
    long long ans =2*s*t*b*512;
    int res =ans/1024;
    cout<<res<<"KB";
    return 0;
}