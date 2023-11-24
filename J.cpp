#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int arr[100];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((arr[j] + arr[i]) % k == 0) {
				c++;
			}
		}
	}
	cout << c;
	return 0;
}	