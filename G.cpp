#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[100];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	double average = (double) sum / n;

	int c = 0;
	int d = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > average) {
			d += arr[i];
			c++;
		}
	}
	cout << d << " " << c;
	return 0;
}