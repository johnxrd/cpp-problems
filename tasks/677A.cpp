//https://codeforces.com/problemset/problem/677/A

#include<iostream>
using namespace std;

int main(){

    int n,h,size=0;
    cin>>n>>h;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>h){
            size+=2;
        }else size+=1;
    }

    cout<<size;

}