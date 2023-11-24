#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int f = n - 1;
	int m = arr[n - 1];
	for (int i = 0; i < n - 1; i++) {
		if (m <= arr[i]) {
			m = arr[i];
			f = i;
		}
	}
	swap(arr[n - 1], arr[f]);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}