#include <bits/stdc++.h> 
    using namespace std;

    int main(){
		stack <int> st;
        string nhap;
        string t = "";
        pair<string, int> p[1000];
        int i = 0;
        while(getline(cin, nhap)){
            t = t + nhap + "\n";
            
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '\n'){
                t[i] = ' ';
            }
            else if(t[i] == ' '){
                t[i] = '*';
            }
        }
        string in;
        stringstream ss(t);
        while(ss >> in){
            if(in == "pop" && !st.empty()){
                st.pop();
            }
            else if(in == "show"){
                if(st.empty()){
                    cout << "empty\n";
                }
                else{
                    stack <int> tmp;
                    while(!st.empty()){
                        tmp.push(st.top());
                        st.pop();
                    }
                    while(!tmp.empty()){
                        cout << tmp.top() << " ";
                        st.push(tmp.top());
                        tmp.pop();
                    }
                    cout << endl;
                }
            }
            else{
                string ans = "";
                for(int i = 5; i < in.size(); i++){
                    ans += in[i];
                }
                int need = stoi(ans);
                st.push(need);
            }
        }
    }