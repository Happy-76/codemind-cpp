#include<bits/stdc++.h>
using namespace std;
string find(int num){
    string str = to_string(num);
    reverse(str.begin(),str.end());
    int n = (stoi(str)*stoi(str));
    int s = num*num;
    str = to_string(n);
    reverse(str.begin(),str.end());
    if(s == stoi(str))
    return "True";
    else
    return "False";
}

int main(){
    int num;
    cin>>num;
    cout<<find(num);
    return 0;
}