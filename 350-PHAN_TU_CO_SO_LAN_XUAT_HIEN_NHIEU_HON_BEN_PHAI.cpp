#include <bits/stdc++.h>
    using namespace std;
    int c[1000005];
    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
                c[a[i]]++;
            }
            stack <pair<int, int>> st;
            int ans[n];
            for(int i = n - 1; i >= 0; i--){
                while(!st.empty() && st.top().first <= c[a[i]]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                }
                else{
                    ans[i] = st.top().second;
                }
                st.push({c[a[i]], a[i]});
            }
            for(int i = 0; i < n; i++){
                cout << ans[i] << " ";
            }
            memset(c, 0, sizeof(c));
            cout << endl;
        }
    }