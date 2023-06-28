#include <bits/stdc++.h> 
    using namespace std;

    bool cmp(pair <int, int> a, pair <int, int> b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        else{
            return a.second < b.second;
        }
        
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            int begin[n], end[n];
            for(int i = 0; i < n; i++){
                cin >> begin[i];
            }
            for(int j = 0; j < n; j++){
                cin >> end[j];
            }
            pair <int, int> time[n];
            for(int i = 0; i < n; i++){
                time[i].first = begin[i];
                time[i].second = end[i];
            }
            sort(time, time + n, cmp);
            int c = 0;
            int e = -1;
            for(int i = 0; i < n; i++){
                if(time[i].first >= e){
                    //cout << time[i].first << " " << time[i].second << endl;
                    c++;
                    e = time[i].second;
                }
            }
            cout << c << endl;
        }
    }