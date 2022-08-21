#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c=0;
    cin>>num;
    string str = to_string(num);
    for(int i=0;i<str.size();i++){
        int n = count(str.begin(),str.end(),str[i]);
        if(n>1){
            c++;
            cout<<"Not Unique Number";
            break;
        }
    }
    if(c==0){
        cout<<"Unique Number";
    }
    return 0;
}