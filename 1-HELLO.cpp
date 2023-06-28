#include <iostream>
	using namespace std;
	struct person{
		string ten;
		int tuoi, chieucao, cannang;
	};
	int main(){
		person khanhbach;
		getline(cin, khanhbach.ten);
		cin >> khanhbach.tuoi >> khanhbach.chieucao >> khanhbach.cannang;
		cout << "-------------------------------------------------------\n";
		
		cout << "ten: " << khanhbach.ten << "\n" << "tuoi: "<< 
		khanhbach.tuoi << "\n" << khanhbach.chieucao;
	}
