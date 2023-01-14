//https://codeforces.com/gym/103895/problem/A

#include<iostream>
using namespace std;

int main(){

    int kg_per_day[7];

    for(int i=1;i<=7;i++){
        cin>>kg_per_day[i];
    }

    int min=kg_per_day[1];
    int max=kg_per_day[1];

    for(int i=1;i<=7;i++){
        if(kg_per_day[i]>max){
            max=kg_per_day[i];
        }
        if(kg_per_day[i]<min){
            min=kg_per_day[i];
        }
    }

    int vitamin_L = max-min;

    cout<<vitamin_L;

}