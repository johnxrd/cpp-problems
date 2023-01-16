//https://codeforces.com/problemset/problem/1351/A

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int solution[t];

    for(int i=0;i<t;i++){

        int a,b;
        cin>>a>>b;
        solution[i]=a+b;
    }

    for(int i=0;i<t;i++){
        cout<<solution[i]<<endl;
    }


}