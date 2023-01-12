//https://codeforces.com/contest/282/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

int n,x=0;
cin>>n;
string a[n],str;

for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
        str=a[i];
        if(str[0]=='+'){
            ++x;
        }else if(str[0]=='X' && str[1]=='+'){
            x++;
        }else if(str[0]=='-'){
            --x;
        }else if(str[0]=='X' && str[1]=='-'){
            x--;
        }
}

cout<<x;

}
