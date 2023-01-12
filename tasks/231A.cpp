//https://codeforces.com/contest/231/problem/A

#include<iostream>
using namespace std;

int main(){

int n,s=0;
cin>>n;
int m[n][3];

for(int i=1;i<=n;i++){
    for(int j=1;j<=3;j++){
        cin>>m[i][j];
    }
}

for(int i=1;i<=n;i++){
        int rez = 0;
    for(int j=1;j<=3;j++){
     if(m[i][j] == 1){
        rez++;
     }
    }
    if(rez>1){
        s++;
    }
}
cout<<s;
return 0;
}
