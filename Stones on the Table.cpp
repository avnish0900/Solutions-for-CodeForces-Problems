#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  char s[n];
  for(int j=0;j<n;j++){
    cin>>s[j];
  }
  int count=0;
  for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
      count++;
    }
  }
  cout<<count;
  return 0;
}
