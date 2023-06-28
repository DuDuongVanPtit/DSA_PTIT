#include <bits/stdc++.h> 
    using namespace std;
    int sum_max(string a, string b){
        string A = "", B = "";
        for(char x : a){
            if(x == '5'){
                A += '6';
            }
            else{
                A += x;
            }
        }
        for(char x : b){
            if(x == '5'){
                B += '6';
            }
            else{
                B += x;
            }
        }
        return stoi(A) + stoi(B);
    }
    int sum_min(string a, string b){
        string A = "", B = "";
        for(char x : a){
            if(x == '6'){
                A += '5';
            }
            else{
                A += x;
            }
        }
        for(char x : b){
            if(x == '6'){
                B += '5';
            }
            else{
                B += x;
            }
        }
        return stoi(A) + stoi(B);
    }

    int main(){
        int a, b;
        cin >> a >> b;
        string A = to_string(a), B = to_string(b);
        cout << sum_min(A, B) << " " << sum_max(A, B) << endl;
    }