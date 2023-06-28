#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int m, n, k;
            cin >> m >> n >> k;
            int a[m], b[n], c[k];
            for(int &x : a){
                cin >> x;
            }
            for(int &y : b){
                cin >> y;
            }
            for(int &z : c){
                cin >> z;
            }
            vector <int> v, v1;
            int i = 0,  j = 0;
            while(i < m && j < n){
                if(a[i] < b[j]){
                    i++;
                }
                else if(a[i] > b[j]){
                    j++;
                }
                else{
                    v.push_back(a[i]);
                    i++;
                    j++;
                }
            }
            int p = 0, q = 0;
            while(p < v.size() && q < k){
                if(v[p] < c[q]){
                    p++;
                }
                else if(v[p] > c[q]){
                    q++;
                }
                else{
                    v1.push_back(v[p]);
                    p++;
                    q++;
                }
            }
            if(!v1.size()){
                cout << "-1";
            }
            else{
                for(int x : v1){
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }