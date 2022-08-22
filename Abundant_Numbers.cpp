#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0)
        sum+=i;
    }
    if(sum > num)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}