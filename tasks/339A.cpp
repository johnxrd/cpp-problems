//https://codeforces.com/problemset/problem/339/A

#include<iostream>
using namespace std;
int main(){
	
    string a; 
    cin>>a;
	
    int z=a.length();
    
    for(int i=0 ;i<z-1; i+=2)
    for(int j=i+2;j<z;j+=2)
    if(a[j]<a[i])
    swap(a[j],a[i]);
	cout<<a;

	return 0;
}