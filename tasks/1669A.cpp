//https://codeforces.com/problemset/problem/1669/A

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    int division[t];
    for(int i=0;i<t;i++){
        int rating;
        cin>>rating;
        if(rating<=1399){
            division[i]=4;
        }else if(rating >= 1400 && rating <= 1599){
            division[i]=3;
        }else if(rating >= 1600 && rating <= 1899){
            division[i]=2;
        }else if(rating>=1900){
            division[i]=1;
        }
    }

    for(int i=0;i<t;i++){
        cout<<"Division "<<division[i]<<endl;
    }

}