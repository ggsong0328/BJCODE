#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s.length() > 1) {
			if (s[i] == ' ') {
				if (i != 0 && i != s.length() - 1) {
					count++;
				}
			}
		}
		else {
			if (s[i] == ' ') {
				if (i == 0)
					count = -1;
			}
		}
	}
	cout << count+1 << endl;
}