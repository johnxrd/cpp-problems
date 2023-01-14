//https://codeforces.com/problemset/problem/486/A

#include<iostream>
#include<math.h>
using namespace std;

long long int f(long long int n) {
    return (n % 2 == 0 ? n / 2 : -(n + 1) / 2);
}

int main(){

    long long int n;
    cin>>n;
    cout<<f(n);
}