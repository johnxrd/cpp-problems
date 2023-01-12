//https://codeforces.com/contest/734/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int a=0,d=0,n;
    cin>>n;
    string str;
        cin>>str;

for(int i=0;i<str.size();i++){
    if(str[i]=='A'){
        a++;
    }else if (str[i]=='D'){
        d++;
    }
}

if(a>d){
    cout<<"Anton";
}else if(d>a){
    cout<<"Danik";
}else cout<<"Friendship";

}


