//https://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main(){

    int n,k=0;
    cin>>n;

    while(n--){
        int p,q;
        cin>>p>>q;
        if((q-p)>=2){
            k++;
        }
    }
    cout<<k;

}