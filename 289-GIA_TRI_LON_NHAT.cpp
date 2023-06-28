#include <bits/stdc++.h> 
    using namespace std;
    #define faster()              \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
    int main(){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = abs(a[i]);
        }
        sort(b, b + n);
        sort(a, a + n, greater <int>());
        long long sum = 0;
        for(int i = 0; i < n; i++){
            int tmp = a[i] + b[i];
            sum += tmp;
        }
        cout << sum << endl;
    }