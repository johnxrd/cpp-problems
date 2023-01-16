//https://codeforces.com/problemset/problem/116/A

#include<iostream>
using namespace std;

int main(){

    int n,rez=0,max=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int a=0,b;
        if(max<rez){
            max=rez;
        }
        cin>>a>>b;
        rez=rez-a;
        rez=rez+b;

    }
    cout<<max;

}