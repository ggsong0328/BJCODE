#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	cin >> s;
	int index = 0;
	
	for (int i = 97; i < 123; i++) {
		for (int j = 0; j < s.length(); j++) {
			if ((int)s[j] == i) {
				index = j;
				break;
			}
			else
				index = -1;
		}
		cout << index << " ";
	}
}