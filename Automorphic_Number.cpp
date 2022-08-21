#include<bits/stdc++.h>
using namespace std;
string check(int n){
    
    int s = n*n;
    while(n>0){
        if(n%10 != s%10)
        return "Not an Automorphic Number";
        
        n/=10;
        s/=10;
    }
    return "Automorphic Number";
}
int main(){
    int num;
    cin>>num;
    cout<<check(num);
    return 0;
}