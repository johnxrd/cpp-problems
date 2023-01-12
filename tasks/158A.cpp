//https://codeforces.com/contest/158/problem/A

#include<iostream>
using namespace std;
int main(){

int n,k,arr[51],s=0;

cin>>n;
cin>>k;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i = 0; i<n; i++){
    if(arr[i] >= arr[k-1] && arr[i] > 0){
      s++;
    }
  }

cout<<s;

return 0;
}

