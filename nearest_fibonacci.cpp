#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,res,res1,c=0;
    cin>>num;
    int f=0,s=1;
    int t =f+s;
    while(num >t){
        int temp =f;
        f=s;
        s=t;
        t =f+s;
        if(num>t ){
          res = t;
        }
    }
    if(t-num == num-res)
    cout<<res<<" "<<t;
    else if(t-num < num-res)
    cout<<t;
    else
    cout<<res;
    return 0;
}