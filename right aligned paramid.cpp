#include <iostream>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	int i = 1;
	while (i <= row) {
		int j = col;
		while (j >= 1) {
			if (i < j) { cout << " "; }
			else { cout << "*"; }
			j--;
		}
		cout << endl;
		i++;
	}
}