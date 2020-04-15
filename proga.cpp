#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	//create a two-dimensional array, which is filled with zeros
	string koloda[8][72];
	int st_id = 0;
	bool vozr = true;
	bool tuz = false;
	bool tuz_st1 = false;
	vector<int> tuz_st;
	for (int i = 0; i < 72; i++) {
		for (int j = 0; j < 8; j++) {
			koloda[i][j] = '0';
		}
	}

	//FILLING AN ARRAY, USING SYMBOLS V, D, K, T
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> koloda[i][j];
		}
	}

	//PROCESSING
	//let`s accept that V=11, D=12, K=13, T=14 
	for (int i = 0; i < 72; i++) {
		for (int j = 0; j < 8; j++) {
			if (koloda[i][j] == "V") {
				koloda[i][j] = "11";
			}
			else if (koloda[i][j] == "D") {
				koloda[i][j] = "12";
			}
			else if (koloda[i][j] == "K") {
				koloda[i][j] = "13";
			}
			else if (koloda[i][j] == "T") {
				koloda[i][j] = "14";
			}
		}
	}

	//search for T in zero line
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 8; j++) {
			if (koloda[i][j] == "14") {
				tuz = true;
				break;
			}
		}
	}
	if (tuz == true) {
		cout << "Maybe we can decompose" << endl;
	}

	else { //we need to check if there is a column that we can decompose into others
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 72; i++) {
				if (koloda[i][j] == "14") {
					tuz_st1 = true;
					break;
				}
			}
			if (tuz_st1) {
				tuz_st.push_back(1);
			}
			else {
				tuz_st.push_back(0);
			}
		}
		if (count(tuz_st.begin(), tuz_st.end(), 0) == 0) {
			cout << "No" << endl; //there is number 1 everywhere, so there is a T in every column
			//which can`t be placed under other cards
		}
		else { //now we need to check that this column is not an decreasing sequence
			for (int i = 0; i < tuz_st.size(); i++) {
				if (tuz_st[i] == 0) {
					st_id = i;
				}
				
				//decreasing check
				for (int i = 0; i < 72; i++) {
					if (koloda[i][st_id] <= koloda[i - 1][st_id]) {
						vozr = false;
					}
				}
				
			}
			if (vozr) cout << "Maybe" << endl;
				else cout << "No" << endl;

			

		}
	}

	//OUTPUT
	for (int i = 0; i < 72; i++) {
		for (int j = 0; j < 8; j++) {
			cout << setw(4) << koloda[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
