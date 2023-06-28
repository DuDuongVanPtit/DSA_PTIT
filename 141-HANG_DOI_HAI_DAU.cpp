#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        cin.ignore();
        deque <int> q;
        while(t){
            string chose;
            cin >> chose;
            if(!isdigit(chose[0])){
                t--;
            }
            if(chose == "PUSHFRONT"){
                int x;
                cin >> x;
                q.push_front(x);
            }
            else if(chose == "PUSHBACK"){
                int x; cin >> x;
                q.push_back(x);
            }
            else if(chose == "PRINTFRONT"){
                if(!q.empty()){
                    cout << q.front() << endl;
                }
                else{
                    cout << "NONE\n";
                }
            }
            else if(chose == "PRINTBACK"){
                if(!q.empty()){
                    cout << q.back() << endl;
                }
                else{
                    cout << "NONE\n";
                }
            }
            else if(chose == "POPBACK"){
                if(!q.empty()){
                    q.pop_back();
                }
            }
            else{
                if(!q.empty()){
                    q.pop_front();
                }
            }
        }
    }