//3
//4
//4 5 2 25
//3
//2 2 2
//10
//6 2 3 4 3 2 6 4 5 7
#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            int ans[n];
            for(int &x : a){
                cin >> x;
            }
            stack <int> st;
            for(int i = n - 1; i >= 0; i--){
                while(!st.empty() && st.top() <= a[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                }
                else{
                    ans[i] = st.top();
                }
                st.push(a[i]);
            }
            while(!st.empty()){
                st.pop();
            }
            for(int x : ans){
                cout << x << " ";
            }
            cout << endl;
        }
    }