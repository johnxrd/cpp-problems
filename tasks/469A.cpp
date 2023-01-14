//https://codeforces.com/problemset/problem/469/A

#include<iostream>
#include<algorithm>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
  
    int temp[n];
  
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
  
    temp[j++] = arr[n - 1];
  
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];
  
    return j;
}

int main(){

    int n;
    cin>>n;

    int p;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
    }

    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }

    int levels[p+q];

    for(int i=0;i<p;i++){
        levels[i]=a[i];
    }

    int k=0;

    for(int i=p;i<q+p;i++){
        levels[i]=b[k];
        k++;
    } 

    sort(levels,levels+p+q);

    if(removeDuplicates(levels,p+q)==n){
        cout<<"I become the guy.";
    }else cout<<"Oh, my keyboard!";

}