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

const int MaxN = 200005;
int isCat[MaxN];
bool IsVis[MaxN];
vector< vector <int> > edges;
int n, m;
int tr = 0;

void dfs(int u, int nc)
{

  nc += isCat[u];
  if(nc>m) return;
  if(edges[u].size()==1 && u!=0) tr += 1;

  IsVis[u] = true;
  if(!isCat[u]) nc = 0;

  FOR(i, 0, edges[u].size())
  {
    int v = edges[u][i];
    if(!IsVis[v]) dfs(v, nc);
  }

}

int main()
{
  IOS;
  cin>>n>>m;
  FOR(i, 0, n) {
    cin>>isCat[i];
    IsVis[i] = false;
  }
  edges.resize(n);

  if(n==1)
  {
    int ans = 0;
    if(isCat[0]<=m) ans = 1;
    cout<<ans<<nl;
    return 0;
  }

  FOR(i, 1, n)
  {
    int u, v;
    cin>>u>>v;
    edges[u-1].push_back(v-1);
    edges[v-1].push_back(u-1);
  }

  dfs(0, 0);
  cout<<tr<<nl;

  return 0;
}
