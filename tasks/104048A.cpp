//https://codeforces.com/gym/104048/problem/A

#include<iostream>
using namespace std;

int main(){

int s,sum=0;
cin>>s;
int c[s][s];
for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
        cin>>c[i][j];
    }
}if(s==1){
    sum=c[s-1][s-1];
}else {
sum=c[0][0]+c[0][s-1]+c[s-1][0]+c[s-1][s-1];
}
cout<<sum;
}
