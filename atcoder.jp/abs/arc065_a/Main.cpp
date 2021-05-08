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
#define SET(value) set<int>value
#define SORT_G(a,N) sort(a,a+N,greater<int>())
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin>>S;
  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  
  reverse(S.begin(),S.end());
  rep(i,4) reverse(divide[i].begin(),divide[i].end());
  
  bool can = true;
  rep(i,S.size()){
    bool can2 = false;
    rep(j,4){
      if(S.substr(i,divide[j].size())==divide[j]){
        can2=true;
        i+=divide[j].size()-1;
      }
    }
    if(!can2){
      can=false;
      break;
    }
  }
  if(can) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  return 0;
}
