//https://codeforces.com/contest/236/problem/A

#include<iostream>
#include<string.h>
using namespace std;

int main(){

char ch;
string username;
cin>>username;
int count = 0;

    for (int i = 0; i < username.size(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (username[j] == username[i]){
                  appears = true;
                  break;
              }
         }
         if (!appears){
             count++;
         }
    }


if(count%2 == 0){
    cout<<"CHAT WITH HER!"<<endl;
} else cout<<"IGNORE HIM!"<<endl;

}
