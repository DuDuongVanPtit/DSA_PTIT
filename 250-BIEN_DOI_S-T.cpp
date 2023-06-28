#include <bits/stdc++.h> 
    using namespace std;
    long long parent[1000005];
    // int c[1000005];
    // int c2[1000005];
    using ll = long long;
    int main(){
        int t; cin >> t;
        while(t--){
            map <ll, ll> c;
            map <ll, ll> c2;
            ll s, t; cin >> s >> t;
            if(s == t){
                cout << "0\n";
            }
            else{
                queue <ll> q;
                q.push(s);
                while(!q.empty()){
                    ll x = q.front();
                    q.pop();
                    if(!c[x]){
                        c[x] = 1;
                        ll tmp1 = x - 1, tmp2 = x * 2;
                        if(tmp1 > 0){
                            if(!c2[tmp1]){
                                c2[tmp1] = 1;
                                parent[tmp1] = x;
                            }
                            q.push(tmp1);
                        }
                        if(!c2[tmp2] && tmp2 < t * 2){
                            c2[tmp2] = 1;
                            parent[tmp2] = x;
                            q.push(tmp2);
                        }
                        
                        if(tmp1 == t || tmp2 == t){
                            break;
                        }
                    }
                }
                ll count = 1;
                ll tmp = parent[t];
                while(tmp != s){
                    count++;
                    tmp = parent[tmp];
                }
                cout << count << endl;
            }
            memset(parent, 0, sizeof(parent));
        }
    } 