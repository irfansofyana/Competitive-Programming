#include <bits/stdc++.h>
using namespace std;

set<int> st;
vector<int> a;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	st = {1,3,4,5,2,9,4};
	a = {1,1,2,3,4,5};
	for (set<int>::iterator it = st.begin(); it != st.begin(); it++){
		cout << *it << '\n';
	}
	cout << *next(st.begin(),0) << '\n';
	cout << "size " << st.size() << '\n';
	return 0;
}