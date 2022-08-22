#include<bits/stdc++.h>
using namespace std;
int main(){
    int st,end;
    cin>>st;
    cin>>end;
    for(int i=st;i<=end;i++){
        int c=0;
        int temp = i;
        while(temp>0){
            int r = temp%10;
            if(r==0 || i%r!=0){
                c++;
                break;
            }
            temp/=10;
        }
        if(c == 0)
        cout<<i<<" ";
    }
    return 0;
}