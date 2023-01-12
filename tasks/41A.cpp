//https://codeforces.com/contest/41/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int j=0;
    string s,t,s_copy;

    cin>>s;
    cin>>t;

    s_copy=s;

    for(int i=s.size()-1;i>=0;i--){
             s_copy[j]=s[i];
             j++;
    }

    if(t==s_copy){
        cout<<"YES";
    }else cout<<"NO";

}
