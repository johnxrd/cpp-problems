//https://codeforces.com/contest/281/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

string str;

cin>>str;

if(!isupper(str[0])){
    str[0]=str[0]-32;
}

cout<<str;

}
