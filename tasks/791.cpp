//https://codeforces.com/contest/791/problem/A

#include<iostream>
using namespace std;

int main(){

int a,b,y=0;
cin>>a;
cin>>b;

do{
        a=a*3;
        b=b*2;
        y++;
}
while(a<=b);
cout<<y;
}
