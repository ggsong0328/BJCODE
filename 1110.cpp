#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int count = 0;
	bool k = true;
	int a = n / 10;
	int b = n % 10;
	int result = 0;
	int num = 0;
	while (k) {
		result = a + b;
		a = b;
		if (result > 9) {
			b = result % 10;
		}
		else 
			b = result;
		num = (a * 10) + b;
		count++;
		if (num == n)
			break;
	}
	cout << count << endl;
	return 0;
}