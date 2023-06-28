#include <bits/stdc++.h>

    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            int a[n];
            for(int &x : a){
                cin >> x;
            }
            vector <string> v;
            for(int i = 0; i < n - 1; i++){
                string s = "";
                for(int j = i + 1; j < n; j++){
                    if(a[j] < a[i]){
                        swap(a[i], a[j]);
                    }
                }
                for(int j = 0; j < n; j++){
                    s = s + " " + to_string(a[j]);
                }
                v.push_back(s);
            }
            for(int i = v.size() - 1; i >= 0; i--){
                cout << "Buoc " << i + 1 << ": ";
                stringstream ss(v[i]);
                string tmp;
                while(ss >> tmp){
                    cout << tmp << " ";
                }
                cout << endl;
            }
        }
        
    }