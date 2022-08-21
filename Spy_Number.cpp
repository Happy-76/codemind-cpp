#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,prd=1;
    cin>>num;
   int s=0;
  while(num>0){
      int r =num%10;
      s+=r;
      prd*=r;
      num/=10;
  }
   if(s == prd){
       cout<<"Spy Number";
   }
   else{
       cout<<"Not Spy Number";
   }
}