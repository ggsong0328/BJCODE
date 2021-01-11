#include <iostream>
using namespace std;

int main() {
	int num[10] = { 0 };
	int count = 0;
	int trp;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		num[i] = num[i] % 42;
		trp = 1;
		for (int j = 0; j < i; j++) {
			if (num[j] == num[i]) {
				trp = 0;
				break;
			}
		}
		if(trp == 1) {
			num[count] = num[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}