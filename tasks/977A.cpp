//https://codeforces.com/contest/977/problem/A

#include<iostream>
using namespace std;

int main(){

int n,k,ld;

cin>>n;
cin>>k;

for(int i=0;i<k;i++){
        ld=n%10;
        if(ld!=0){
            n=n-1;
        }else n=n/10;
}
cout<<n;
}
