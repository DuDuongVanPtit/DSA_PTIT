#include <bits/stdc++.h> 
    using namespace std;
    void solve(string s){
        stack <char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                bool check = true;
                char tmp = st.top();
                st.pop();
                while(tmp != '('){
                    if(tmp == '+' || tmp == '-' ||tmp == '*' || tmp == '/'){
                        check = false;
                    }
                    tmp = st.top();
                    st.pop();
                }
                if(check){
                    cout << "Yes";
                    return;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        cout << "No\n";
    }

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string s;
            getline(cin, s);
            solve(s);
            cout << endl;
        }
    }