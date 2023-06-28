    #include <bits/stdc++.h>
        using namespace std;
        #define faster()                  \
        ios_base::sync_with_stdio(0); \
        cin.tie(NULL);                \
        cout.tie(NULL);
        int Find(int k, vector <int> v){
            int l = 0, r = v.size() - 1;
            while(l <= r){
                int m = (l + r) / 2;
                if(v[m] == k){
                    return m + 1;
                }
                else if(v[m] < k){
                    l = m + 1;
                }
                else{
                    r = m - 1;
                }
            }
            return -1;
        }

        int main(){
            faster();
            int t;
            cin >> t;
            while(t--){
                int n, k;
                cin >> n >> k;
                vector <int> v(n);
                for(int i = 0; i < n; i++){
                    cin >> v[i];
                }
                if(Find(k, v) == -1){
                    cout << "NO" << endl;
                }
                else{
                    cout << Find(k, v) << endl;
                }
            }
        }