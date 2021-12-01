// Стасюк Анна П13121
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	srand(time(0));
	const int n = 5; const int m = 5;
	int k; int s = 1;
	int mat[n][m];
	cin >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mat[i][j] = rand() % 9 + 1;
			cout << mat[i][j] << " ";
			if (i == k - 1) {
				s *= mat[i][j];
			}

		}
		cout << endl;
	}
	cout << s;
	return 0;
}

		