//https://codeforces.com/contest/785/problem/A

#include<iostream>
using namespace std;

int main(){

int n,sum=0;
cin>>n;
string figures[n];

for(int i=0;i<n;i++){
    cin>>figures[i];
}

for(int i=0;i<n;i++){
    if(figures[i]=="Tetrahedron"){
        sum=sum+4;
    }else if(figures[i]=="Cube"){
        sum=sum+6;
    }else if(figures[i]=="Octahedron"){
        sum=sum+8;
    }else if(figures[i]=="Dodecahedron"){
        sum=sum+12;
    }else if(figures[i]=="Icosahedron"){
        sum=sum+20;
    }
}

cout<<sum;

}

