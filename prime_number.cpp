#include<bits/stdc++.h>
using namespace std;
string check(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return "not a prime";
    }
    return "prime";
}
int main(){
    int num;
    cin>>num;
    cout<<check(num);
    return 0;
}