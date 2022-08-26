#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,val,need;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s;i++){
        cin>>val;
        v.emplace_back(val);
    }
    cin>>need;
    cout<<count(v.begin(),v.end(),need);
    return 0;
}