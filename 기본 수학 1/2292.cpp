// ¹úÁı

#include <iostream>
using namespace std;
int main() {
	long long N;
	cin >> N;

	int count = 1;
	long long range = 1;
	long long tmp = -1;

	while (1) {
		if (range >= N) {
			break;
		}
		tmp = 6 * count;
		count++;
		range += tmp;
	}
	cout << count << endl;
}