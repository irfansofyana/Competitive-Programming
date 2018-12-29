//
//  Main.cpp
//
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp(x) freopen(x.txt, "r", stdin);
#define out(x) freopen(x.txt, "w", stdout);
#define IO inp() out()
#define spacnl(i, n) cout << (i == n-1 ? '\n' : ' ');

//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = 1e-9;

//declare variables here
LL L, R, mod;

LL g(LL x){
  LL X, Y;
  if ((x)%2 == 0) {
    X = (x)/2;
    Y = x+1;
  }else{
    X = (x);
    Y =  (x+1) / 2;
  }
  X %= MODPRIMA;
  Y %= MODPRIMA;
  X = (X*Y)%MODPRIMA;
  return X;
}

LL f(LL x){
  LL bagi = x / mod;
  LL sisa = x % mod;
  LL res = (g(mod-1) * (bagi%MODPRIMA))%MODPRIMA;
  res = (res + g(sisa))%MODPRIMA;
  return res;
}

int main(){
  OPTIMATION
  cin >> L >> R >> mod;
  // cout << "g " << g(R) << " " << g(L-1) << '\n';
  // cout << "f" << " " << f(R) << " " << f(L-1) << '\n';
  cout << (f(R) - f(L-1) + MODPRIMA)%MODPRIMA << '\n';
  return 0;
}