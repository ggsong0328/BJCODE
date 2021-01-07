#include <iostream>
using namespace std;
int arr[3];

int Hansu(int n) {
	if (0 < n && 100 > n)
		return 1;
	else if (100 <= n && 1000 > n) {
		for (int i = 0; i < 3; i++) {
			arr[i] = n % 10;
			n = n / 10;
		}
		if (arr[0] - arr[1] == arr[1] - arr[2])
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

int main() {
	int N;
	cin >> N;
	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (Hansu(i) == 1)
			count++;
	}
	cout << count << endl;
	return 0;
}