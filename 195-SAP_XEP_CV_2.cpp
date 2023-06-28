#include <bits/stdc++.h> 
    using namespace std;

    bool cmp (pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
        if(a.second.second == b.second.second){
            return a.second.first > b.second.first;
        }
        else{
            return a.second.second > b.second.second;
        }
    }
    int c[100000];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n; 
            map <int, int> mp;
            int sign[1001] = {0};
            pair <int, pair<int, int>> p[n];
            for(int i = 0; i < n; i++){
                int job, deadline, profit; 
                cin >> job >> deadline >> profit;
                mp[deadline] = 1;
                p[i].first = job;
                p[i].second.first = deadline;
                p[i].second.second = profit;
            }
            sort(p, p + n, cmp);
            int sumprofit = 0, Finish = 0;
            int done = 0;
            for(auto it : p){
                for(int i = it.second.first - 1; i >= 0; i--){
                    if(c[i] == 0){
                        c[i] = 1;
                        Finish++;
                        sumprofit += it.second.second;
                        break;
                    }
                }
            }
            cout << Finish << " " << sumprofit << endl;
            memset(c, 0, sizeof(c));
        }
    }