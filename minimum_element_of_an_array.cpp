#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,val;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s;i++){
        cin>>val;
        v.emplace_back(val);
    }
    cout<<*min_element(v.begin(),v.end());
    return 0;
}