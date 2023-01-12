//https://codeforces.com/contest/1703/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

int t;
cin>>t;
string words[t],word;

for(int i=0;i<t;i++){
    cin>>words[i];
}

for(int i=0;i<t;i++){
        word = words[i];
        for(int i=0;i<word.size();i++){
            word[i]=tolower(word[i]);
        }
        if(word=="yes"){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
}

}
