#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int hop[100005] = {0}, giao[100005] = {0};
            int n, m;
            cin >> n >> m;
            int a[n], b[m];
            int hopsize = 0, giaosize = 0;
            for(int &x : a){
                cin >> x;
                hop[x] = 1;
                giao[x] = 1;
                hopsize++;
            }
            for(int &x : b){
                cin >> x;
                if(hop[x] == 0){
                    hopsize++;
                }
                if(giao[x] == 1){
                    giaosize++;
                }
            }
            int h[hopsize];
            int i = 0, j = 0;
            int k = 0;
            while(i < n && j < m){
                if(a[i] < b[j]){
                    h[k] = a[i];
                    i++;
                }
                else if(b[j] < a[i]){
                    h[k] = b[j];
                    j++;
                }
                else{
                    h[k] = a[i];
                    i++; j++;
                }
                k++;
            }
            while(i < n){
                h[k++] = a[i];
                i++;
            }
            while(j < m){
                h[k++] = b[j];
                j++;
            }
            for(int x : h){
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