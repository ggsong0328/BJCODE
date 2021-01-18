#include <iostream>
using namespace std;

void Hanoi(int N, int start, int end, int by) {
	if (N == 1)
		cout << start << " " << end << '\n';
	else {
		Hanoi(N - 1, start, by, end);
		cout << start << " " << end << '\n';
		Hanoi(N - 1, by, end, start);
	}
}

int main() {
	int N;
	cin >> N;
	cout << (1 << N) - 1 << '\n';
	Hanoi(N, 1, 3, 2);
}