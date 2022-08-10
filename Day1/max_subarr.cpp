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
typedef vector<vector<int>> vvi;
typedef vector<llu> vlu;

llu power(llu base,llu exp){llu res=1;while(exp){if(exp&1)res=(res*base)%MOD;base=(base*base)%MOD;exp>>=1;}return res;}

void solve() {
  vi nums;
  int sum = 0, maxSum = INT_MIN;

  for(int i: nums) {
    sum += i;
    maxSum = max(maxSum, sum);
    sum = max(sum, 0);
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
