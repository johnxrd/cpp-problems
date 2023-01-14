//https://codeforces.com/problemset/problem/69/A

#include<iostream>
int n,a,b,c,d,e,f;
main(){std::cin>>n;while(n--){std::cin>>a>>b>>c,d+=a,e+=b,f+=c;}std::cout<<(d|e|f?"NO":"YES");}