#include <bits/stdc++.h>
    using namespace std;
    string a[100005];
    void np(){
        a[1] = "";
        a[1] += "1";
        queue <string> Q;
        Q.push(a[1]);
        for(int i = 2; i <= 100000; i = i + 2){
            string s = "";
            a[i] = Q.front() + "0";
            a[i + 1] = Q.front() + '1';
            Q.pop();
            Q.push(a[i]);
            Q.push(a[i + 1]);
        }
    }

    int main(){
        np();
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }