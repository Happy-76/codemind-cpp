#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str = to_string(num);
    int n = str.size();
    for(int i=0;i<n;i++){
        if(str[i] == '6'){
            str[i] = '9';
            break;
        }
    }
    cout<<stoi(str);
    return 0;
}