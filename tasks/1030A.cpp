//https://codeforces.com/contest/1030/problem/A

#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    if(sum==0){
        cout<<"EASY";
    }else cout<<"HARD";

}
