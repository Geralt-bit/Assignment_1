#include <bits/stdc++.h>
using namespace std;

int main()
{
	double arr[100];
	int n;
	double arr2[100];
	double max;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr2[i] = abs(arr[i]);
	}
	max = arr2[0];
	for (int i = 0; i < n; i++) {
		if (max < arr2[i]) {
			max = arr2[i];
		}
	}
	cout << fixed << setprecision(2) << max;
	return 0;
}			   