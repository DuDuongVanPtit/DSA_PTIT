#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            stack <int> st;
            for(int i = 0; i < s.size(); i++){
                if(isdigit(s[i])){
                    int tmp = s[i] - '0';
                    st.push(tmp);
                }
                else{
                    if(!st.empty()){
                        int x = st.top();
                        st.pop();
                        int y = st.top();
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
            }
            cout << st.top() << endl;
        }
    }