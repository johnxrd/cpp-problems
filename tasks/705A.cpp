//https://codeforces.com/contest/705/problem/A

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, aux, bux;
    string a,b,c,d;
    b="I love that";
    a="I hate that";
    c="I love it";
    d="I hate it";
    cin>>n;

    for(int i=1;i<=n-1;i++){
        if(i%2==0){
            cout<<b<<" ";
        }else cout<<a<<" ";
    }

    if(n%2==0){
        cout<<c;
    } else cout<<d;
}
