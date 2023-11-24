#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int arr[99];
	int d = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int c = arr[0];
	for (int i = 0; i < n; i++) {
		if (c > arr[i]) {
			c = arr[i];
			d = i;
		}
	}
	swap(arr[0], arr[d]);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}		