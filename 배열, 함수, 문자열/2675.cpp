#include <iostream>
#include <string>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	string s;
	int loop = 0;
	for (int i = 0; i < T; i++) {
		cin >> loop;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < loop; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
}