#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> a;
    set<int> b;
    int n,m,val,c=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>val;
        a.insert(val);
    }
    for(int j=0;j<m;j++){
        cin>>val;
        b.insert(val);
    }
    for(auto it:a){
        if(b.find(it)==b.end()) c++;
    }
    for(auto it:b){
        if(a.find(it)==a.end()) c++;
    }
    cout<<c;
    return 0;
    
}