#include <bits/stdc++.h>
    using namespace std;
    void slp(int n){
        vector <string> v;
        int c = 2;
        queue <string> q;
        v.push_back("6");
        v.push_back("8");
        q.push("6");
        q.push("8");
        while(q.front().size() < n){
            c += 2;
            string a = "", b = "";
            a += q.front() + "6";
            b += q.front() + "8";
            v.push_back(a);
            v.push_back(b);
            q.pop();
            q.push(a);
            q.push(b);
        }
        cout << c << endl;
        for(string x : v){
            cout << x << " ";
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            slp(n);
            cout << endl;
        }
    }