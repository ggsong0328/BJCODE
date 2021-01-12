#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a = 0;
	int i = 1;
	for (; a < N; i++) {
		a += i;
	}
	i--;
	int numer;
	int denom;
	int t = a - N;
	if (i % 2 == 1) {
		numer = 1 + t;
		denom = i - t;
	}
	else {
		numer = i - t;
		denom = 1 + t;
	}
	cout << numer << "/" << denom;
}