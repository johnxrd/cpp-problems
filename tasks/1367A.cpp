//https://codeforces.com/problemset/problem/1367/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;
  string b[t],a[t];
  
  for(int i=0;i<t;i++){
    cin>>b[i];
  }

  for(int i=0;i<t;i++){
    string str = b[i];
    a[i] += str[0];
    for (int j = 1; j < str.size(); j++) {
      a[i] += str[j];
      j++;
    }
  }
  
  for(int i=0;i<t;i++){
    cout<<a[i]<<endl;
  }

  return 0;
}