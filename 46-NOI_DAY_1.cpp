#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            priority_queue <int, vector<int>, greater<int>> q;
            for(int &x : a){
                cin >> x;
                q.push(x);
            }
            int mod = 1e9 + 7;
            long long cost = 0;
            while(q.size() != 1){
                int d1 = q.top();
                q.pop();
                int d2 = q.top();
                q.pop();
                int tmp = d1 + d2;
                tmp %= mod;
                cost += tmp;
                cost %= mod;
                q.push(tmp);
            }
            cout << cost << endl;
        }
    }