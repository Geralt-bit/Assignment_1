#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int arr[100];
	int c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	int min = arr[0];
	for (int i = 0; i < n; i++){
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	c = max - min;
	cout << c;
	return 0;
}	