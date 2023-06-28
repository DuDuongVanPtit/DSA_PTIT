#include <bits/stdc++.h>
    using namespace std;
    int ans[1005][1005];
    int main(){
        int V;
        cin >> V;
        cin.ignore();
        vector <int> v[1005];
        string s[1005];
        for(int i = 0; i < V; i++){
            getline(cin, s[i]);
        }
        for(int i = 0; i < V; i++){
            stringstream ss(s[i]);
            string tmp;
            while(ss >> tmp){
                v[i].push_back(stoi(tmp));
            }
        }
        for(int i = 0; i < V; i++){
            for(int j = 0; j < v[i].size(); j++){
                ans[i + 1][v[i][j]] = 1;
            }
        }
        for(int i = 1; i <= V; i++){
            for(int j = 1; j <= V; j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }