using namespace std;
#include <bits/stdc++.h>
#define rep(i, s) for (int i = 0; i < s; ++i)
#define repr(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define all(v) (v.begin(), v.end())
#define EACH(i, s) for (__typeof__((s).begin()) i = (s).begin(); i != (s).end(); ++i)
#define VEC(a, n) vector<int>a(n)
#define VECV(a,n,m) vector<vector<int>> a(n, vector<int>(m));
#define PQ(a) priority_queue<int>a
#define PQmin(a) priority_queue< int, :vector<int>, greater<int> >a
#define PAIR pair<int, int>
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e10)
#define PI (acos(-1))
const ll mod = 1000000007;
bool f(string s){
  bool ans=true;
  rep(i,s.size()/2){
    if(s[i]!=s[s.size()/2+i]){
      ans=false;
      break;
    }
  }
  return ans;
}
vector<ll> calc(ll n){
  ll a = 2;
  cout<<"ok";
  vector<ll> v;
  while (n >= a) {
    if (n % a == 0) {
      cout<<a;
      n /= a;
      if(v.back()!=a)v.push_back(a); 
    }
      else a+=1;
  }
    return v;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X;
  cin>>X;
  for(int i=-1000;i<1001;i++){
    for(int j=-1000;j<1001;j++){
      if(pow(i,5)-pow(j,5)==X){
        cout<<i<<" "<<j<<endl;
        return 0;
      }
    }
  }

}
