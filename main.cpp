#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	/*int width = 20;
	int cY1 = width / 2, cY2 = width / 2;
	bool up = true;
	int i = 0, j = 0;
	if (width % 2 != 0) {
		i = 1;
		j = 1;
	}

	for (int i = 0; i <= width; i++) {
		for (int j = 0; j <= width; j++) {
			if (j == cY1 || j == cY2) {
				cout << " *";
			} else {
				cout << "  ";
			}
			
		}
		
		if (cY1 == 0) {
			up = false;
		}

		if (up) {
			cY1--;
			cY2++;
		} else {
			cY1++;
			cY2--;
		}

		cout << endl;
	}*/

	int size = 25;
	int center = 0;

	if (size % 2 != 0) {
		center = 1;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i + j >= size - 1 && i >= j) {
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	for (int i = center; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i + j <= size - 1 && i <= j) {
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}