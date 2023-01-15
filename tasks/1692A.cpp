//https://codeforces.com/problemset/problem/1692/A

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int rez[t];

    for(int i=0;i<t;i++){
        int a,b,c,d,k=0;
        cin>>a>>b>>c>>d;
        if(a<b){
            k++;
        }
        if(a<c){
            k++;
        }
        if(a<d){
            k++;
        }
        rez[i]=k;
    }

    for(int i=0;i<t;i++){
        cout<<rez[i]<<endl;
    }

}