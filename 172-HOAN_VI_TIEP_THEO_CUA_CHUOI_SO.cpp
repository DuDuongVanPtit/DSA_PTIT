#include <bits/stdc++.h>
   using namespace std;
    bool check(string t2){
        for(int i = 0; i < t2.size() - 1; i++){
            if(t2[i] < t2[i + 1]){
                return false;
            }
        }
        return true;
    }
    void hoanvinext(string t2){
        int i = t2.size() - 2;
        while(i >= 0 && t2[i] >= t2[i + 1]){
            i--;
        }
        int j = t2.size() - 1;
        while(t2[j] < t2[i]){
            j--;
        }
        swap(t2[i], t2[j]);
        sort(t2.begin() + i + 1, t2.end());
        cout << t2 << endl;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            int k;
            cin >> k >> s;
            if(check(s)){
                cout << k << " " << "BIGGEST";
                cout << endl;
            }
            else{
                cout << k << " ";
                hoanvinext(s);
            }
        }
    }