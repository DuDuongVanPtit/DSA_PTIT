#include <bits/stdc++.h>
    using namespace std;
    int c[500];
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            int n;
            cin >> n >> s;
            int danhdau[500] = {0};
            set <int> se;
            for(int i = 0; i < s.size(); i++){
                danhdau[s[i]] = 1;
                c[s[i]]++;
            }
            priority_queue <int> q;
            for(int i = s.size() - 1; i >= 0; i--){
                if(danhdau[s[i]]){
                    q.push(c[s[i]]);
                    danhdau[s[i]] = 0;
                }
            }
            while(!q.empty() && n > 0){
                n--;
                int tmp = q.top() - 1;
                q.pop();
                q.push(tmp);
            }
            long long sum = 0;
            while(!q.empty()){
                int x = q.top();
                sum += x * x;
                q.pop();
            }
            cout << sum << endl;
            memset(c, 0, sizeof(c));
        }
    }