#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            queue <int> q;
            while(n--){
                int choise;
                cin >> choise;
                if(choise == 1){
                    cout << q.size() << endl;
                }
                else if(choise == 2){
                    if(q.empty()){
                        cout << "YES\n";
                    }
                    else{
                        cout << "NO\n";
                    }
                }
                else if(choise == 3){
                    int p; cin >> p;
                    q.push(p);
                }
                else if(choise == 4){
                    if(!q.empty()){
                        q.pop();
                    }
                }
                else if(choise == 5){
                    if(q.empty()){
                        cout << "-1\n";
                    }
                    else{
                        cout << q.front() << endl;
                    }
                }
                else{
                    if(q.empty()){
                        cout << "-1\n";
                    }
                    else{
                        cout << q.back() << endl;
                    }
                }
            }
        }
    }