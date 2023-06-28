#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t; cin >> t;
        while(t--){
            string s; cin >> s;
            stack <string> st;
            for(int i = s.size() - 1; i >= 0; i--){
                if(isalpha(s[i])){
                    string tmp = "";
                    tmp += s[i];
                    st.push(tmp);
                }
                else{
                    string ok = "";
                    if(s[i] == '+'){
                        ok += '+';
                    }
                    else if(s[i] == '-'){
                        ok += '-';
                    }
                    else if(s[i] == '*'){
                        ok += '*';
                    }
                    else{
                        ok += '/';
                    }
                    string tmp = "";
                    tmp = tmp + st.top();
                    st.pop();
                    tmp = tmp + st.top() + ok; 
                    st.pop();
                    st.push(tmp);
                }
            }
            cout << st.top() << endl;
        }
    }