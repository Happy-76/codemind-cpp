#include <iostream>
#include <vector>
#include <map>
using namespace std;
void readV(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
int main () {
    int n,m;
    cin>>n>>m;
    vector<int> v1(n), v2(m);
    readV(v1, n);
    readV(v2, m);
    vector<int> vis(100001, 0);
    for (int i = 0; i < n; i++) {
        if (vis[v1[i]] == 0) {
            for (int j = 0; j < m; j++) {
                if (v2[j] == v1[i]) {
                    printf("%d ", v1[i]);
                    break;
                }
            }
        }
        vis[v1[i]] = 1;
    }
}