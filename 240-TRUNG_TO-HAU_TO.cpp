#include <bits/stdc++.h>
    using namespace std;
    int uutien(char x){
        if(x == '+' || x == '-'){
            return 1;
        }
        else if(x == '*' || x == '/'){
            return 2;
        }
        else if(x == '^'){
            return 3;
        }
        else if(x == '('){
            return 0;
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s; cin >> s;
            stack <char> st;
            string ans = "";
            for(int i = 0; i < s.size(); i++){
                if(isalpha(s[i])){
                    ans += s[i];
                }
                else if(s[i] == '('){
                    st.push(s[i]);
                }
                else if(s[i] == ')'){
                    while(!st.empty() && st.top() != '('){
                        ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    while(!st.empty() && uutien(s[i]) <= uutien(st.top())){
                        ans += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
            while(!st.empty()){
                if(st.top() != '('){
                    ans += st.top();
                }
                st.pop();
            }
            cout << ans << endl;
        }
    }