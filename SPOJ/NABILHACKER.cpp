#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
#define IO inp() out()

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
const double EPS = -1e9;

//declare variables here
int T;
string s;
deque<char> curr, bck;

int main(){
  OPTIMATION
  cin >> T;
  while (T--){
  	cin >> s;
  	for (int i = 0; i < (int)s.size(); i++){
  		if (s[i] == '<') {
  			if (curr.empty()) continue;
  			char atas = curr.back();
  			curr.pop_back();
  			bck.push_front(atas);
  		}else if (s[i] == '>'){
  			if (bck.empty()) continue;
  			char atas = bck.front();
  			bck.pop_front();
  			curr.push_back(atas);
  		}else if (s[i] == '-'){
  			if (curr.empty()) continue;
  			curr.pop_back();
  		}else {
  			curr.push_back(s[i]);
  		}
  	}
  	while (!curr.empty()){
  		cout << curr.front();
  		curr.pop_front();
  	}
  	while (!bck.empty()){
  		cout << bck.front();
  		bck.pop_front();
  	}
  	cout << '\n';
  }
  return 0;
}