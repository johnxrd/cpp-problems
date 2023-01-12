//https://codeforces.com/contest/96/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int c=1;
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(str[i] == str[i+1]){
            c++;
            if(c==7){
                break;
            }
        }else c=1;
    }
    if(c>=7){
        cout<<"YES";
    }else cout<<"NO";
}
