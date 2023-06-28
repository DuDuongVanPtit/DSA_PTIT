#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int giao[100005] = {0};
            int n, m;
            cin >> n >> m;
            int a[n], b[m];
            set <int> se;
            for(int &x : a){
                cin >> x;
                giao[x] = 1;
                se.insert(x);
            }
            for(int &x : b){
                cin >> x;
                se.insert(x);
            }
            sort(b, b + m);
            for(int x : se){
                cout << x << " ";
            }
            cout << endl;
            for(int x : b){
                if(giao[x] == 1){
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }