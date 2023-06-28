#include <bits/stdc++.h>
    using namespace std;

    bool cmp(pair <int, int> a, pair <int, int> b){
        if(a.first == b.first){
            return a.second < b.second;
        }
        else{
            return a.first < b.first;
        }
    }

    int main(){
        int V;
        cin >> V;
        cin.ignore();
        pair <int, int> p[1000];
        int edge = 0;
        vector <int> v[1000];
        string s[1000];
        for(int i = 0; i < V; i++){
            getline(cin, s[i]);
        }
        for(int i = 0; i < V; i++){
            stringstream ss(s[i]);
            string tmp;
            while(ss >> tmp){
                v[i].push_back(stoi(tmp));
            }
        }
        for(int i = 0; i < V; i++){
            for(int j = 0; j < v[i].size(); j++){
                if(v[i][j] > i + 1){
                    p[edge].first = i + 1;
                    p[edge].second = v[i][j];
                    edge++;
                }
            }
        }
        sort(p, p + edge, cmp);
        for(int i = 0; i < edge; i++){
            cout << p[i].first << " " << p[i].second << endl;
        }
    }