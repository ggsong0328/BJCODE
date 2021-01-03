#include <iostream>

using namespace std;
int arr[10];
int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	int N = A * B * C;
	int TN = N;
	cin >> A >> B >> C;
	int digit = 0;
	while (N != 0) {
		N = N / 10;
		++digit;
	}

	for (int i = (digit-1); i >= 0; i--) {
		arr[i] = TN % 10;
		TN = TN / 10;
	}
	
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = 0; j < digit; j++) {
			if (i == arr[j])
				count++;
		}
		cout << count << endl;
	}

	return 0;
}