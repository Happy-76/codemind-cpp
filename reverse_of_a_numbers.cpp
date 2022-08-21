#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num,temp;
    cin>>num;
    temp = abs(num);
    string str = to_string(temp);
    reverse(str.begin(),str.end());
    temp = stoul(str);
    if(num<0)
    cout<<(temp-2*temp);
    else
    cout<<temp;
    return 0;
}