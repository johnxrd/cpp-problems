//https://codeforces.com/contest/112/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

string str1,str2;
int size1=0,size2=0;

cin>>str1;
cin>>str2;

for(int i=0;i<str1.size();i++){
        str1[i]=tolower(str1[i]);
    size1=+str1[i];
}
for(int i=0;i<str2.size();i++){
    str2[i]=tolower(str2[i]);
    size2=+str2[i];
}

if(str1 < str2){
    cout<<"-1";
}else if(str1 > str2){
    cout<<"1";
} else cout<<"0";

return 0;
}
