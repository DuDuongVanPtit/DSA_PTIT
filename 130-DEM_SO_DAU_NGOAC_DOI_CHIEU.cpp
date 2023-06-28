#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            stack <char> st;
            int c = 0;
            if(s[0] == ')'){
                c++;
                s[0] = '(';
            }
            if(s[s.size() - 1] == '('){
                s[s.size() - 1] = ')';
                c++;
            }
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '('){
                    st.push('(');
                }
                else{
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        c++;
                        st.push('(');
                    }
                }
            }
            int c1 = 0;
            while(!st.empty()){
                c1++;
                st.pop();
            }
            cout << c + c1 / 2 << endl;
        }
    }