#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        queue <int> q;
        while(t--){
            string chose;
            getline(cin, chose);
            if(chose == "POP"){
                if(!q.empty()){
                    q.pop();
                }
            }
            else if(chose == "PRINTFRONT"){
                if(q.empty()){
                    cout << "NONE\n";
                }
                else{
                    cout << q.front() << endl;
                }
            }
            else{
                string s = "";
                for(int i = 5; i < chose.size(); i++){
                    s += chose[i];
                }
                q.push(stoi(s));
            }
        }
    }