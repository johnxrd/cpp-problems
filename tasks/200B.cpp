//https://codeforces.com/problemset/problem/200/B

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;
    cin>>n;

    double arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    double sum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    double rez = sum/n;

    cout<<setprecision(12)<<rez;

}