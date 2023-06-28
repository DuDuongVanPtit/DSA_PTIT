#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t; cin >> t;
        while(t--){
            int c[300] = {0}, danhdau[300] = {0};
            int k;
            string s; 
            cin >> k >> s;
            priority_queue <int> q;
            for(int i = 0; i < s.size(); i++){
                c[s[i]]++;
            }
            for(int i = 0; i < s.size(); i++){
                if(!danhdau[s[i]]){
                    q.push(c[s[i]]);
                    danhdau[s[i]] = 1;
                }
            }
            while(!q.empty() && k > 0){
                k--;
                int tmp = q.top() - 1;
                q.pop();
                if(tmp > 0){
                    q.push(tmp);
                }
            }
            long long sum = 0;
            while(!q.empty()){
                sum = sum + 1ll * q.top() * q.top();
                q.pop();
            }
            cout << sum << endl;
        }
    }