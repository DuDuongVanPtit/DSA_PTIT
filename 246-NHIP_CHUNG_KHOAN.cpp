#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            int a[n];
            for(int &x : a){
                cin >> x;
            }
            int ans[n];
            stack <pair<int, int>> st;
            for(int i = 0; i < n; i++){
                int c = 0;
                while(!st.empty() && st.top().first <= a[i]){
                    c++;
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = i + 1;
                }
                else{
                    ans[i] = i - st.top().second;
                }
                st.push({a[i], i});
            }
            for(int x : ans){
                cout << x << " ";
            }
            cout << endl;
        }
    }