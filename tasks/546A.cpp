//https://codeforces.com/contest/546/problem/A

#include<iostream>
using namespace std;

int main(){

int n,k,w,sum=0;

cin>>k;
cin>>n;
cin>>w;

for(int i=1;i<=w;i++){
    sum=sum+(i*k);
}
if(sum-n<0){
    cout<<"0";
}else cout<<sum-n;

}
