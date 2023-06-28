#include <bits/stdc++.h> 
    using namespace std;

    int main(){
		stack <int> st;
        int t;
        cin >> t;
        while(t--){
            string t;
            cin >> t;
            if(t == "PUSH"){
                int need;
                cin >> need;
                st.push(need);
            }
            else if(t == "POP" && !st.empty()){
                st.pop();
            }
            else if(t == "PRINT"){
                if(st.empty()){
                    cout << "NONE\n";
                }
                else{
                    cout << st.top() << endl;
                }
            }
        }
    }