#include <bits/stdc++.h>
    using namespace std;
    void solve(int n){
        queue <string> q;
        q.push("1");
        while(!q.empty() && stoll(q.front()) % n != 0){
            string a = "", b = "";
            a += q.front() + "0";
            b += q.front() + "1";
            q.pop();
            q.push(a);
            q.push(b);
        }
        cout << q.front() << endl;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            solve(n);
        }
    }