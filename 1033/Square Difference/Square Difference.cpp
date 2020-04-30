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

string IsPrime(LL a, LL b)
{
  if(a%2 == b%2) return "NO";
  LL n = a+b;
  LL d = a-b;

  if(d>1) return "NO";

  if(n==2 || n==3) return "YES";
  if(n%2==0 || n%3==0) return "NO";

  for(LL i=5; (i*i)<=n; i+=6)
  {
    if(n%i==0 || n%(i+2)== 0) return "NO";
  }
  return "YES";
}


int main(){

  IOS;
  int tn;
  cin>>tn;
  while(tn--)
  {
    LL a, b;
    cin>>a>>b;
    cout<<IsPrime(a, b)<<nl;
  }
  return 0;
}
