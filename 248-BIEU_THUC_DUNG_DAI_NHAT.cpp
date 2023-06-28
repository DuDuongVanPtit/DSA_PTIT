#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            int n = s.size();
            int ans = 0;
            stack <int> st;
            st.push(-1);
            for(int i = 0; i < n; i++){
                if(s[i] == '('){
                    st.push(i);
                }
                else{
                    st.pop();
                    if(!st.empty()){
                        ans = max(ans, i - st.top());
                    }
                    else{
                        st.push(i);
                    }
                    
                }
            }
            while(!st.empty()){
                st.pop();
            }
            stack <char> st1;
            int max_val = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '('){
                    st1.push(s[i]);
                }
                else{
                   if(!st1.empty()){
                        st1.pop();
                        max_val += 2;
                    }
                }
            }
            cout << max(ans, max_val) << endl;
        }
    }