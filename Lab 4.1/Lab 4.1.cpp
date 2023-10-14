#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, i;
	double sum = 0;
	cout << "N: "; cin >> N;
	i = N;
	while (i <= 22) {
		sum += sqrt(pow(i, 2) + pow(N, 2)) / i;
		i++;
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	i = N;
	do {
		sum += sqrt(pow(i, 2) + pow(N, 2)) / i;
		i++;
	} while (i <= 22);
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int i = N; i <= 22; i++) {
		sum += sqrt(pow(i, 2) + pow(N, 2)) / i;
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int i = 22; i >= N; i--) {
		sum += sqrt(pow(i, 2) + pow(N, 2)) / i;
	}
	cout << "sum: " << sum << endl;

	return 0;
}