#include<bits/stdc++.h>
using namespace std;
string check(int num){
    string str = to_string(num);
    reverse(str.begin(),str.end());
    if(num == stoi(str))
    return "True";
    else
    return "False";
}
int main(){
    int num;
    cin>>num;
    cout<<check(num);
    return 0;
}