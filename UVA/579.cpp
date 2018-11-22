#include <bits/stdc++.h>
using namespace std;

int h,m,bagi,sisa;
char c;

int jarak(int x,int y){	//x < y
	return min(y-x-1,13-y+x);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cout << fixed << showpoint << setprecision(3);
	while (cin >> h >> c >> m){
		if (h==0 && m==0) return 0;
		if (m==0) {
			if (h<=6) cout << (double)(30*h) << '\n';
			else cout << (double)(30*(12-h)) << '\n';
		}
		else {
			(m%5==0) ? bagi = (m/5): bagi = (m/5)+1;
			sisa = m%5;
			double ans = 0;
			ans += (double)(jarak(min(bagi,h),max(bagi,h)))*30+(30.00-(double)(m)/2)+(double)(sisa*6);
			cout << ans << '\n';
		}
	}
	return 0;
}