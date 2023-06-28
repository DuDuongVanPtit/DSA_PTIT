#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge;
            cin >> vertex >> edge;
            vector <int> v[1000];
            for(int i = 1; i <= edge; i++){
                int first, end;
                cin >> first >> end;
                v[first].push_back(end);
                // v[end].push_back(first);
            }
            for(int i = 1; i <= vertex; i++){
                sort(v[i].begin(), v[i].end());
                cout << i << ": ";
                for(int x : v[i]){
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }