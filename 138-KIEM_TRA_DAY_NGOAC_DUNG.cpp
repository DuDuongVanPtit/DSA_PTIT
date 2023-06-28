#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string s1;
            getline(cin, s1);
            string s = "";
            for(char x : s1){
                if(x == '[' || x == ']' || x == '(' || x == ')' || x == '.'){
                    s += x;
                }
            }
            int n = s.size() - 1;
            cout << s << endl;
            if(s[0] == ')' || s[0] == ']' || s[n - 1] == '[' || s[n - 1] == '(' || s[n] != '.'){
                cout << "NO\n";
            }
            else{
                stack <char> st;
                int ok = 1;
                for(int i = 0; i < n; i++){
                    char x = s[i];
                    if(x == '[' || x == '('){
                        st.push(x);
                    }
                    else{
                        if(st.empty()){
                            ok = 0;
                            break;
                        }
                        else{
                            if(x == ']' && st.top() == '[' || x == ')' && st.top() == '('){
                                st.pop();
                            }
                            else{
                                ok = 0;
                                break;
                            }
                        }
                    }
                    
                }
                if(!st.empty()){
                    ok = 0;
                }
                if(ok){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }  
    }