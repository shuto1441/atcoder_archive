#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y,z;
  cin>>x>>y>>z;
  if(min(x,y)<z&&max(x,y)>z)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
  
}
