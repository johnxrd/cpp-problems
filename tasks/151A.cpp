//https://codeforces.com/problemset/problem/151/A

#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e,f,g,h;
cin>>a>>b>>c>>d>>e>>f>>g>>h;
cout<<(min((b*c/g),min((d*e),(f/h))))/a;
}