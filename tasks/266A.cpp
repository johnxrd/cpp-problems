//https://codeforces.com/problemset/problem/266/A

#include<iostream>
using namespace std;

int main(){

    int n,k=0;
    cin>>n;

    char s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            k++;
        }
    }

    cout<<k;

}