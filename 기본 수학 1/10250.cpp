// ACM ȣ��

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;
		if (N % H == 0)
			cout << H * 100 + (N / H) << endl;
		else
			cout << (N % H) * 100 + (N / H)+1 << endl;
	}
	return 0;
}