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
            int t = 0;
            int tmp = 0;
            vector<int> v;
            for(int i = 0; i < n - 1; i++){
                if(a[i + 1] > a[i]){
                    tmp = i;
                }
                else{
                    v.push_back(tmp);
                    while(a[i + 1] < a[i]){
                        i++;
                    }
                    v.push_back(tmp)
                }
            }
        }
    }