#include<bits/stdc++.h>
using namespace std;
int find(int x){
    int i=1,sum=0;
    while(i <= (x/2)){
        if(x%i == 0)
        sum+=i;
        i++;
    }
    return sum;
}

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int s1=find(n1);
    int s2=find(n2);
    if(s1 == n2 && s2 == n1){
        cout<<"Amicable";
    }
    else
    cout<<"Not Amicable";
    
return 0;
}