#include <bits/stdc++.h> 
    using namespace std;
    using ll = long long;
    ll merge(int l, int m, int r, ll a[]){
        vector <ll> v1(a + l, a + m + 1);
        vector <ll> v2(a + m + 1, a + r + 1);
        int i = 0, j = 0;
        ll ans = 0;
        while(i < v1.size() && j < v2.size()){
            if(v1[i] <= v2[j]){
                a[l++] = v1[i];
                i++;
            }
            else{
                ans += v1.size() - i;
                a[l++] = v2[j];
                j++;
            }
        }
        while(i < v1.size()){
            a[l++] = v1[i]; i++;
        }
        while(j < v2.size()){
            a[l++] = v2[j]; j++;
        }
        return ans;
    }
    ll mergesort(int l, int r, ll a[]){
        ll ans = 0;
        if(l < r){
            int m = (l + r) / 2;
            ans += mergesort(l, m, a);
            ans += mergesort(m + 1, r, a);
            ans += merge(l, m, r, a);
        }
        return ans;
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            ll a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            cout << mergesort(0, n - 1, a) << endl;
        }
    }