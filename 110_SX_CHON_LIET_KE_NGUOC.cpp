#include <bits/stdc++.h>

    using namespace std;
    
    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        vector <string> v;
        for(int i = 0; i < n - 1; i++){
            string s = "";
            int min_i = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[min_i]){
                    min_i = j;
                }
            }
            swap(a[i], a[min_i]);
            for(int j = 0; j < n; j++){
                s = s + " " + to_string(a[j]);
            }
            v.push_back(s);
        }
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