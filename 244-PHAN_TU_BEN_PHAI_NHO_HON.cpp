#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; cin >> n;
            int a[n];
            int maxindexr[n], minvalr[n]; 
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            stack <int> st;
            for(int i = n - 1; i >= 0; i--){
                while(!st.empty() && a[st.top()] <= a[i]){
                    st.pop();
                }
                if(st.empty()){
                    maxindexr[i] = -1;
                }
                else{
                    maxindexr[i] = st.top();
                }
                st.push(i);
            }
            while(!st.empty()){
                st.pop();
            }
            stack <int> st1;
            for(int i = n - 1; i >= 0; i--){
                while(!st1.empty() && st1.top() >= a[i]){
                    st1.pop();
                }
                if(st1.empty()){
                    minvalr[i] = -1;
                }
                else{
                    minvalr[i] = st1.top();
                }
                st1.push(a[i]);
            }
            for(int i = 0; i < n; i++){
                if(maxindexr[i] == - 1){
                    cout << "-1 ";
                }
                else{
                    cout << minvalr[maxindexr[i]] << " ";
                }
            }
            while(!st1.empty()){
                st1.pop();
            }
            cout << endl;
        }
    }