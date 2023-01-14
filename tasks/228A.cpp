//https://codeforces.com/problemset/problem/228/A

#include<iostream>
using namespace std;

int main(){

    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    int k=0;

    if(s1==s2 || s1==s3 || s1==s4){
        k++;
    }
    if(s2==s3 || s2==s4){
        k++;
    }if(s3==s4){
        k++;
    }

    cout<<k;

}