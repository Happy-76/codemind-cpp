#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,l=0;
    cin>>num;
   while(num>0){
       int r=num%10;
        l = max(r,l);
       num/=10;
   }
   cout<<l;
   return 0;
}