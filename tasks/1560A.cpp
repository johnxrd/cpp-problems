//https://codeforces.com/problemset/problem/1560/A

#include <iostream>
#include <string>

using namespace std;

int kthElement(int k) 
{ 
    if (k == 0) 
        return 1; 
  
    int i = 0, j = 0; 
    int kthNumber = 0; 
  
    for (i = 0; i < k; i++) 
    { 
        kthNumber += 1; 
  
        while (kthNumber % 3 == 0 || kthNumber % 10 == 3) 
            kthNumber++; 
    } 
  
    return kthNumber; 
}

int main(){

    int t;
    cin>>t;
    
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>arr[i];
    }

    for(int i=0;i<t;i++){
        cout<<kthElement(arr[i])<<endl;
    }

}