#include <iostream>
using namespace std;
int arr[1000000];
int main() {
	int n = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int num_max = arr[0];
	int num_min = arr[0];
	for (int i = 1; i < n; i++) {
		if (num_max < arr[i])
			num_max = arr[i];

		if (num_min > arr[i])
			num_min = arr[i];
	}
	cout << num_min << " " << num_max << endl;
	return 0;
}