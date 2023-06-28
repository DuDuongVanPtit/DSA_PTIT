#include <bits/stdc++.h>
    using namespace std;
    bool cmp(pair <int, int> a, pair<int, int> b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        else{
            return a.second > b. second;
        }
    }
    bool painted[1005];
    void tomau(vector <int> ke[], int no, int v){
        for(int i = 1; i <= v; i++){
            if(i != no){
                for(int x : ke[i]){
                    if(painted[i] == false){
                        painted[i] = true;
                    }
                }
            }
        }
    }
    bool check(int v){
        for(int i = 1; i <= v; i++){
            if(painted[i] == false){
                return false;
            }
        }
        return true;
    }
    int main(){
        int t; cin >> t;
        while(t--){
            int v, e, m; cin >> v >> e >> m;
            vector <int> ke[1005];
            for(int i = 0; i < e; i++){
                int x, y; cin >> x >> y;
                ke[x].push_back(y);
                //ke[y].push_back(x);
            }
            pair <int, int> p[v + 1]; 
            for(int i = 1; i <= v; i++){
                p[i].first = i;
                p[i].second = ke[i].size();
            }
            sort(p + 1, p + v + 1, cmp);
            int c = 0;
            for(int i = 1; i <= v; i++){
                c++;
                if(check(v)){
                    break;
                }
                tomau(ke, p[i].first, v);
            }
            if(m < c){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            memset(painted, false, sizeof(painted));
        }
        
    }