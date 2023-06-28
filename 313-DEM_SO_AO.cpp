#include <bits/stdc++.h> 
    using namespace std;
    pair <int, int> p[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    void DFS(int i, int j, char a[][1005], int vertex, int edge){
        a[i][j] = '.';
        for(int t = 0; t <= 7; t++){
            int I = i + p[t].first;
            int J = j + p[t].second;
            if(I >= 0 && I < vertex &&  J >= 0 && J < edge && a[I][J] == 'W'){
                DFS(I, J, a, vertex, edge);
            }
        }
    }
    int main(){
            int vertex, edge;
            cin >> vertex >> edge;
            char a[1005][1005];
            for(int i = 0; i < vertex; i++){
                for(int j = 0; j < edge; j++){
                    cin >> a[i][j];
                }
            }
            int c = 0;
            for(int i = 0; i < vertex; i++){
                for(int j = 0; j < edge; j++){
                    if(a[i][j] == 'W'){
                        c++;
                        DFS(i, j, a, vertex, edge);
                    }
                }
            }
            cout << c << endl;
    }