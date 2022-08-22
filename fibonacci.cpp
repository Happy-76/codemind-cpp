#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cin>>end;
    int f=0,s=1,i=0;
    int t=f+s;
    cout<<f<<" "<<s<<" ";
    while(i<end-2){
        cout<<t<<" ";
        f=s;
        s=t;
        t=f+s;
        i++;
    }
    return 0;
}