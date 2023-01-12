//https://codeforces.com/contest/492/problem/A

#include<iostream>
using namespace std;

int main(){

    int n,i=1,sum=0,k=0;
    cin>>n;

    while(sum<=n){
        sum=sum+i;
        i++;
        n=n-sum;
        if(n<0){
            break;
        }
        k++;
    }
    cout<<k;
}
