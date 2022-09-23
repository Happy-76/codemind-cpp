#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<int> b;
    int n,m,val,c=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }
    for(int j=0;j<m;j++){
        cin>>val;
        b.push_back(val);
    }
    for(auto it:a){
        if(find(b.begin(),b.end(),it)==b.end()) cout<<it<<" ";
    }
    for(auto it:b){
        if(find(a.begin(),a.end(),it)==a.end()) cout<<it<<" ";
    }
    return 0;
    
}