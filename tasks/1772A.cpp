//https://codeforces.com/problemset/problem/1772/A

#include<iostream>
using namespace std;

int main(){

    int t,k=0;
    cin>>t;

    int rez[t];

    while(t--){
        int a,b;
        char plus;
        cin>>a>>plus>>b;
        rez[k]=a+b;
        k++;
    }

    for(int i=0;i<k;i++){
        cout<<rez[i]<<endl;
    }

}