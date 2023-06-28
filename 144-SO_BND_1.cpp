#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    string a[1000005];
    void np(){
        a[0] = ""; a[0] += "0";
        a[1] = ""; a[1] += "1";
        queue <string> q;
        q.push(a[1]);
        for(int i = 2; i <= 1000000; i = i + 2){
            string s = "";
            a[i] = q.front() + "0";
            a[i + 1] = q.front() + "1";
            q.pop();
            q.push(a[i]);
            q.push(a[i + 1]);
        }
    }
    int main(){
        np();
        int t; cin >> t;
        while(t--){
            ll n;
            cin >> n;
            int c = 0;
            int i = 1;
            long long tmp = stoll(a[i]);
            while(tmp <= n){
                if(a[i].size() > 19){
                    break;
                }
                c++;
                i++;
                tmp = stoll(a[i]);
            }
            cout << c << endl;
        }
    }