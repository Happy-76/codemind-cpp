#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt=0;
    if(n==0) return 1;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n,c=0,min;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=count(a[0]);
    for(int i=0;i<n;i++)
    {
        if(count(a[i])<=min)
        {
            min=count(a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count(a[i])==min)
        {
            c++;
        }
    }
    cout<<c;
}