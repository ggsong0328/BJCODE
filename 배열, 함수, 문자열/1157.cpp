#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[26] = { 0, };
	int max_count = 0;
	int index = 0;
	int count = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int n = s[i];
		if (n < 97)
			arr[n - 65]++;
		else
			arr[n - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] > max_count) {
			max_count = arr[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max_count) {
			count++;
			if (count >= 2) {
				cout << "?" << endl;
				return 0;
			}
		}
	}

	cout << (char)(index + 65) << endl;

	return 0;
}