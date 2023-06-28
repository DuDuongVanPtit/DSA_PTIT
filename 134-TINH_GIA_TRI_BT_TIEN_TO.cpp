#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t; cin >> t;
        while(t--){
            string s; cin >> s;
            stack <int> st;
            for(int i = s.size() - 1; i >= 0; i--){
                if(isdigit(s[i])){
                    st.push((s[i] - '0'));
                }
                else{
                    int y = st.top();
                    st.pop();
                    int x = st.top();
                    st.pop();
                    if(s[i] == '+'){
                        st.push(y + x);
                    }
                    else if(s[i] == '-'){
                        st.push(y - x);
                    }
                    else if(s[i] == '*'){
                        st.push(y * x);
                    }
                    else{
                        st.push(y / x);
                    }
                }
            }
            cout << st.top() << endl;
        }
    }