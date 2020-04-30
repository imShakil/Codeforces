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



string GetString(int *arr, int len)
{
  string s = "";

  FOR(i, 0, len)
  {
    s += (arr[i]+'0');
  }
  return s;
}

string GetResult(int s, int len)
{
  int MX[len], MN[len], mx, mn;
  mx = s;
  mn = s;
  MN[0] = 1;
  MX[0] = min(9, mx);
  mn -= 1;
  mx -= MX[0];

  FOR(i, 1, len)
  {
    if(mx>=9)
    {
      MX[i] = 9;
      mx -= 9;
    }
    else
    {
      MX[i] = mx;
      mx = 0;
    }

    if(mn>=9)
    {
      MN[len-i] = 9;
      mn -= 9;
    }
    else
    {
      MN[len-i] = mn;
      mn = 0;
    }
  }
  MN[0] += mn;


  return GetString(MN, len)+" "+GetString(MX, len);
}


int main(){
  IOS;
  int m, s;

  cin>>m>>s;
  if(m*9 < s || (s==0 && m>1))
  {
    cout<<"-1 -1\n";
    return 0;
  }

  if(s==0)
  {
    cout<<"0 0\n";
    return 0;
  }
  cout<<GetResult(s, m)<<nl;

}
