#include <bits/stdc++.h> 
    using namespace std;

    void check(int maxbuy, int useday, int need){
        if(maxbuy < need){
            cout << "-1\n";
            return;
        }
        int store = need;
        for(int i = 1; i <= useday; i++){
            store -= need;
            if(i % 7 != 0){
                store += maxbuy;
            }
            else{
                if(store < need){
                    cout << "-1\n";
                    return; 
                }
            }
        }
        int needuse = useday * need;
        int ans;
        if(needuse % maxbuy == 0){
            ans = needuse / maxbuy;
        }
        else{
            ans = needuse / maxbuy + 1;
        }
        cout << ans << endl;
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int maxbuy, useday, need;
            cin >> maxbuy >> useday >> need;
            check(maxbuy, useday, need);
        }
    }