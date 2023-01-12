//https://codeforces.com/contest/581/problem/A

#include<iostream>
using namespace std;
int main()
{
int a,b,d,t;
t=0;
d=0;
cin>>a>>b;
while(a>0&&b>0)
{
    d+=1;
    a--;
    b--;
}
while(a>=2)
{
    t+=1;
    a-=2;
}
while(b>=2)
{
    t+=1;
    b-=2;
}
cout<<d<<" "<<t;
}

