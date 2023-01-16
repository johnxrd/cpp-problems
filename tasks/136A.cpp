//https://codeforces.com/problemset/problem/136/A

#include <iostream>
using namespace std;
int i,k,a[105],n;
int main(){
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>k;
        a[k]=i;
        }
        for(i=1;i<=n;i++){
            cout<<a[i]<<" ";
            }
}