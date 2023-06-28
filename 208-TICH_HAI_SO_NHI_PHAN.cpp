#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s1, s2;
            cin >> s1 >> s2;
            ll a = 0, b = 0;
            int m1 = 0, m2 = 0;
            for(int i = s1.size() - 1; i >= 0; i--){
                if(s1[i] == '1'){
                    a += pow(2, m1);
                }
                m1++;
            }
            for(int i = s2.size() - 1; i >= 0; i--){
                if(s2[i] == '1'){
                    b += pow(2, m2);
                }
                m2++;
            }
            cout << a * b << endl;
        }
    }