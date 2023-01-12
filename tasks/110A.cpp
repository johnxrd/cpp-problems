//https://codeforces.com/contest/110/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int l=0;
    string str;
    cin>>str;

for(int i=0;i<str.size();i++){
    if(str[i]=='4' || str[i]=='7'){
        l++;
    }
}

if(l==4 || l==7){
    cout<<"YES";
}else cout<<"NO";

}

