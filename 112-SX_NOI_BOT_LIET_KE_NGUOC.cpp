#include <bits/stdc++.h>

    using namespace std;
    bool check(int n, int a[]){
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] < a[i]){
                return false;
            }
        }
        return true;
    }
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
            int tmp;
            vector <string> v;
            for(int i = 0; i < n - 1; i++){
                string s = "";
                for(int j = 0; j < n - 1; j++){
                    if(a[j + 1] < a[j]){
                        swap(a[j], a[j + 1]);
                    }
                }
                if(!check(n, a)){
                    for(int j = 0; j < n; j++){
                        s = s + " " + to_string(a[j]);
                    }
                    v.push_back(s);
                }
            }
            string s = "";
            for(int x : a){
                
                s = s + " " + to_string(x);
            }
            v.push_back(s);
            for(int i = v.size() - 1; i >= 0; i--){
                stringstream ss(v[i]);
                string tmp;
                cout << "Buoc " << i + 1 << ": ";
                while(ss >> tmp){
                    cout << tmp << " ";
                }
                cout << endl;
            }
        }
    }