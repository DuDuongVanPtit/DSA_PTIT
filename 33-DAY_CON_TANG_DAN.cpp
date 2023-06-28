#include <bits/stdc++.h>
    using namespace std;
    int n;
    int a[100];
    vector <int> v;
    vector <string> ans;
    void Try(int i){
        for(int j = i + 1; j <= n; j++){
            if(a[i] < a[j]){
                v.push_back(a[j]);
                if(v.size() > 1){
                    string s = "";
                    for(int x : v){
                        s = s + to_string(x) + ' ';
                    }
                    ans.push_back(s);
                }
                Try(j);
                v.pop_back();
            }
        }
    }
    int main(){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Try(0);
        sort(ans.begin(), ans.end());
        for(string x : ans){
            cout << x << endl;
        }
    }