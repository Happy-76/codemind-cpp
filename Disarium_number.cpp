#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum =0,i;
    cin>>num;
    int temp = num;
    string str = to_string(num);
    i = str.size();
    while(num>0){
        int r=num%10;
        sum+=pow(r,i);
        num/=10;
        i--;
    }
    if(temp == sum)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}