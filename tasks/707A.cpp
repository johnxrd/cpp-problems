//https://codeforces.com/problemset/problem/707/A

#include<iostream>
using namespace std;

int main(){

    int n,m,k=0;
    cin>>n>>m;

    char photo[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>photo[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(photo[i][j]== 'W' || photo[i][j]== 'B' ||photo[i][j]== 'G'){
                k++;
            }
        }
    }

    if(k==(n*m)){
        cout<<"#Black&White";
    }else cout<<"#Color";

    return 0;

}