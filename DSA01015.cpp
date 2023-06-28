#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;
	int main(){
		int t;
		cin >> t;
		while(t--){
			int n; cin >> n;
			queue <string> q;
			q.push("9");
			while(1){
				ll tmp = stoll(q.front());
				string add = q.front();
				q.pop();
				if(tmp % n == 0){
					cout << tmp << endl;
					break;
				}
				q.push(add + "0"); q.push(add + "9");
			}
		}
	}
