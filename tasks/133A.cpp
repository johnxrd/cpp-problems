//https://codeforces.com/problemset/problem/133/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char a = 'H';
    char b = 'Q';
    char c = '9';

    string str;
    cin>>str;

    int f=0;

    for(int i=0;i<str.size();i++){

        if(str[i]==a || str[i]==b || str[i]==c){
            f++;
        }
    }

    if(f>0){
        cout<<"YES";
    }else cout<<"NO";

}