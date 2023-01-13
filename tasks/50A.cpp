//https://codeforces.com/problemset/problem/50/A

#include<iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    int domino_size = 2*1;

    int table_size = m*n;

    int domino_numbers = table_size/domino_size;

    cout<<domino_numbers;

    return 0;

}