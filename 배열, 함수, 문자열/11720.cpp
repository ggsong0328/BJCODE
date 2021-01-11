#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int sum = 0;
	string s;
	cin >> s;
	for (int i = 0; i < N; i++) {
		s[i] = s[i] - '0';
		sum += s[i];
	}
	cout << sum << endl;
	return 0;
}