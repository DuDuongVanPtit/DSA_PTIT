#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string s;
            getline(cin, s);
            stack <string> st;
            string tmp;
            stringstream ss(s);
            while(ss >> tmp){
                st.push(tmp);
            }
            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
    }