#include<bits/stdc++.h>
using namespace std;
int find(int a,int b){
    while(a!=b){
        if(a>b)
        a-=b;
        if(b>a)
        b-=a;
    }
    return a;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<find(n1,n2);
    return 0;
}