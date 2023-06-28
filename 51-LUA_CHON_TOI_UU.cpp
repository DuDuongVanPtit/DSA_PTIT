#include <bits/stdc++.h> 
    using namespace std;

    bool cmp(pair <int, int> a, pair <int, int> b){
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
            pair <int, int> p[n];
            for(int i = 0; i < n; i++){
                int bg, end;
                cin >> bg >> end;
                p[i].first = bg; p[i].second = end;
            }
            sort(p, p + n, cmp);
            int e = p[0].second;
            int ans = 1;
            for(int i = 1; i < n; i++){
                if(p[i].first >= e){
                    ans++;
                    e = p[i].second;
                }
            }
            cout << ans <<endl;
        }
    }