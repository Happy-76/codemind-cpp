#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    int ori = num; 
    while(num!=1 && num!=7 && num>9){
   while(num>0){
       int r = num%10;
       sum+=r*r;
       num/=10;
   }
   num = sum;
   sum=0;
   if(num == ori)
   break;
  
}
if(num == 1 || num == 7)
cout<<"True";
if(num==ori || num!=1 && num!=7)
cout<<"False";

return 0;
}