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

LL fact[10];

void pre()
{
  fact[0] = 1LL;
  fact[1] = fact[0];

  FOR(i, 2, 10)
  {
    fact[i] = i*fact[i-1]*1LL;
  }
}

LL GetNum(LL n)
{
  LL nn = 1;
  while(n!=0)
  {
    nn *= (fact[n%10]);
    n/=10;
  }
  return nn;
}

bool isOk(LL n)
{
  if(n==1) return 0;
  FOR(i, 2, 10) if(n%fact[i]==0) return true;
  return false;
}

void GetResult(LL num)
{

  cout<<num<<nl;

  FOR(i, 2, 10)
  {
    if(num%fact[i]==0)
    {
      cout<<num<<' '<<fact[i]<<nl;
      while(1)
      {
        if(num%fact[i]==0 && isOk(num/fact[i]))
        {
          num /= fact[i];
          cout<<i<<' '<<num<<nl;
        }
        else break;
      }
    }
  }
  cout<<nl;
///  return ans;
}

int main(){
  IOS;
  pre();
  int n;
  LL num;
  cin>>n>>num;
  LL numidc = GetNum(num);
  ///cout<<numidc<<nl;
  GetResult(numidc);
  return 0;
}
