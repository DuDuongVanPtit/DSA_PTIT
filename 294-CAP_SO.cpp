#include <bits/stdc++.h> 
    using namespace std;
    bool cmp(pair<int, int> a, pair<int, int> b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        else{
            return a.second < b.second;
        }
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int v[n * 2];
            for(int i = 0; i < n*2; i++){
                cin >> v[i];
            }
            vector <int> f(n + 5, 1);
            f[0] = 0;
            vector <pair<int, int>> p;
            for(int i = 0; i < n * 2; i = i + 2){
                p.push_back({v[i], v[i + 1]});
            }
            sort(p.begin(), p.end());
            for(int i = 2; i <= p.size(); i++){
                int max_val = 0;
                for(int j = 1; j < i; j++){
                    if(p[j - 1].second < p[i - 1].first){
                        max_val = max(max_val, f[j]);
                    }
                }
                f[i] += max_val;
            }
            cout << *max_element(f.begin(), f.end()) << endl;
        }
    }