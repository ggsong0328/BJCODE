#include <iostream>
using namespace std;

int main() {
	int arr[9];
	int index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i+1;
		}
	}
	cout << max << "\n" << index << endl;
}