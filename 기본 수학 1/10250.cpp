// ACM хёез

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
<<<<<<< HEAD
	return 0;
=======
>>>>>>> 6657bb1 (BOJ - 10250)
}