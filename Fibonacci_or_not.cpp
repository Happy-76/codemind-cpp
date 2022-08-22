#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c=0;
    cin>>num;
    int f=0,s=1;
    int t=f+s;
    while(t<=num){
        if(t == num){
            cout<<"True";
            c=0;
            break;
        }
        f=s;
        s=t;
        t=f+s;
        c++;
    }
    if(c!=0)
    cout<<"False";
    return 0;
}