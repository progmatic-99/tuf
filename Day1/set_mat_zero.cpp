#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define llu unsigned long long
#define fo(a,b) for(int i=(a); i<(b); ++i)
#define endl "\n"
bool isPowofTwo(int x) { return x && !(x & (x-1)); }
const llu MOD = 1e9+7;

using namespace std;

typedef vector<int> vi;
typedef vector<llu> vlu;

llu power(llu base,llu exp){llu res=1;while(exp){if(exp&1)res=(res*base)%MOD;base=(base*base)%MOD;exp>>=1;}return res;}

void solve() {
  int row, col;
  cin>>row>>col;
  vector<vector<int>> mat(row, vector<int> (col));

  for(int i=0; i<row; ++i) {
    for(int j=0; j<col; ++j) {
      cin>>mat[i][j];
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
