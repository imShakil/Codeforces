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

LL BinarySearch(int pos, int size, int val, int *dif)
{
  int lo = pos;
  int hi = size-1;
  while(lo<=hi)
  {
    int mid = (lo+hi)/2;
    if(dif[mid]<val) lo = mid + 1;
    else hi = mid - 1;
  }
///  cout<<lo<<' '<<hi<<nl;
  return (size - lo)*1LL;
}

int main(){

  IOS;
  int n;
  cin>>n;
  int a[n], dif[n], b;

  FOR(i, 0, n) cin>>a[i];
  FOR(i, 0, n) {
    cin>>b;
    dif[i] = a[i]-b;
  }

  sort(dif, dif+n);

  LL tot = 0;
  FOR(i, 0, n-1)
  {
  ///  cout<<dif[i]<<nl;
    tot += BinarySearch(i+1, n, 1-dif[i], dif);
  }

  cout<<tot<<nl;

  return 0;
}
