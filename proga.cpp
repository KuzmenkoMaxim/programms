#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	vector<int> mas;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		mas.push_back(c);
	}
	/*for (auto k : c) {
		k++;
	}
	for (auto k : c) {
		cout << k << " ";
	}*/
	return 0;
}