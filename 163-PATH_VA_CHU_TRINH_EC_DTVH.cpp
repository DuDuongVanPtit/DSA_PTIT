#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int vertex, edge;
            cin >> vertex >> edge;
            vector <int> v[1005];
            int deg[1005] = {0};
            for(int i = 0; i < edge; i++){
                int first, end;
                cin >> first >> end;
                deg[first]++;
                deg[end]++;

            }
            int check = 0;
            int ok = 1;
            for(int i = 1; i <= vertex; i++){
                //cout << deg[i] << " ";
                if(deg[i] % 2 != 0){
                    ok = 0;check++;
                }
            }
            if(ok){
                cout << "2";
            }
            else if(check == 2){
                cout << "1";
            }
            else{
                cout << "0";
            }
            cout << endl;
        } 
    }