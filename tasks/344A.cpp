//https://codeforces.com/contest/344/problem/A

#include<iostream>
using namespace std;

int main(){

    int n,c=1;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if((arr[i]%10)==(arr[i+1]/10)){
            c++;
        }
    }
    cout<<c;

}
