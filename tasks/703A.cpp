//https://codeforces.com/problemset/problem/703/A

#include<iostream>
using namespace std;

int main(){

    int n,m=0,c=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }else if(b>a){
            c++;
        }
    }

    if(m>c){
        cout<<"Mishka";
    }else if(c>m){
        cout<<"Chris";
    }else cout<<"Friendship is magic!^^";

}