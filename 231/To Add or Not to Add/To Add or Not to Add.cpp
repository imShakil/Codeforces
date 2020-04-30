/******************************************
          Mobarak Hosen Shakil
        ICE, Islamic University
     ID: mhiceiuk(all), 29698(LOJ)
   E-mail: mhiceiuk @ (Gmail/Yahoo/FB)
 Blog: https://iuconvergent.wordpress.com
*******************************************/

#include<bits/stdc++.h>
using namespace std;

#define IOS             ios_base::sync_with_stdio(0);cin.tie(0)
#define LL              long long int
#define ULL             unsigned LL
#define READ(File)      freopen(File, "r", stdin)
#define WRITE(File)     freopen(File, "w", stdout)
#define FOR(i, a, b)    for(int i=a; i<b; i++)
#define REP(i, a, b)    for(int i=a; i>=b; i--)
#define PII             pair<int, int>
#define pb              push_back
#define nl              '\n'

#define dbl             printf("I'm here baby\n")

const int inf = 1<<30;
const LL INF  = 1e18;
const int MOD = 1e9+7;
const int MAXN = 300005;

/*** Custom Sorting ***/
bool Compare(const PII &x, const PII &y)
{
    if(x.first == y.first)
    {
        return x.second>y.second;
    }
    return x.first<y.first;
}

/** 3D Direction --> x, y, z **/
int dx[] = {-1,  1, 0,  0,  0,  0};
int dy[] = { 0,  0, 1, -1,  0,  0};
int dz[] = { 0,  0, 0,  0,  1, -1};
///          N,  S, E,  W,  U,  D

int Bin(int pos, LL k, LL *a, LL *s)
{
  int lo = 0;
  int hi = pos;
  while(lo<=hi)
  {
    int mid = (lo+hi)/2;
    LL s1 = (pos-mid+1)*(a[pos])*1LL;
    LL s2 = s[pos] - s[mid] + a[mid];
    LL dif = s1 - s2;
    if(dif > k) lo = mid + 1;
    else hi = mid - 1;
  }

///  cout<<lo<<' '<<hi<<nl;
  return pos - lo +1;
}

int main(){

  IOS;
  int n, k;
  cin>>n>>k;
  LL a[n];
  LL sum[n];
  FOR(i, 0, n) cin>>a[i];

  sort(a, a+n);
  int ans = 1;
  LL v = a[0];
  sum[0] = a[0];
  FOR(i, 1, n)
  {
    sum[i] = sum[i-1]+a[i];
    int x = Bin(i, k*1LL, a, sum);
    if(x>ans)
    {
      ans = x;
      v = a[i];
    }
  }

  cout<<ans<<' '<<v<<nl;

  return 0;
}
