//https://codeforces.com/contest/271/problem/A

#include<iostream>
using namespace std;

int countUniqueDigits(int N)
{
    int res = 0;
    int cnt[10] = { 0 };
    while (N > 0) {
        int rem = N % 10;
        cnt[rem]++;
        N = N / 10;
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] == 1) {
            res++;
        }
    }
    return res;
}

int main()
{
    int y;
    cin>>y;
    start:
    if(countUniqueDigits(y+1)==4){
        cout<<y+1;
    }else {
        y++;
        goto start;}
}
