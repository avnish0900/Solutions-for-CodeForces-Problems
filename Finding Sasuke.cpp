#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=1;i<n;i+=2){
      cout<<-a[i]<<" "<<a[i-1]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
