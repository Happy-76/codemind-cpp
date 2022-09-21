#include<bits/stdc++.h>
using namespace std;
string megaprime(int num){
    while(num>0){
        int r=num%10;
        if(r!=2 && r!=3 && r!=5 && r!=7) {
            return "Not Mega Prime";
        }
        num =num/10;
    }
    
    return "Mega Prime";
}
string check(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return "not a prime";
    }
    return "prime";
}
int main(){
    int num;
    cin>>num;
    if(check(num)=="prime"){
        cout<<megaprime(num);
    }
    else
    cout<<"Not Mega Prime";
    return 0;
}