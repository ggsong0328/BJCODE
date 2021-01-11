#include <iostream>
using namespace std;

int main_b() {
	int a = 0;
	int b = 0;
	for (int i = 0;; i++) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << endl;
	}

	return 0;
}