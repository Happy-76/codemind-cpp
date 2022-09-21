#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int c=0;
            for(int j=1;j<=i;j++){
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                ans++;
            }
            c=0;
        }
    }
    cout<<ans+1;
    return 0;
}