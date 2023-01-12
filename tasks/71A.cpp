//https://codeforces.com/contest/71/problem/A

#include<iostream>
#include<string.h>
using namespace std;
int main(){

int n,k;
string words[101],word;

cin>>n;
for(int i=1;i<=n;i++){
    cin>>words[i];
}

for(int i=1;i<=n;i++){
    if(words[i].size()>10){
        word = words[i];
        k=word.size()-1;
        cout<<word[0]<<word.size()-2<<word[k]<<endl;
    } else cout<<words[i]<<endl;
}

}
