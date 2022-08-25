#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,val,c=0;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    cin>>a[i];
    cin>>val;
    for(int i=0;i<size;i++){
        if(a[i] == val){
            c++;
            break;
        }
    }
    if(c == 1)
    cout<<"True";
    else
    cout<<"False";
    return 0;
    
}