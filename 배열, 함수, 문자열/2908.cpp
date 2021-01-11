#include <iostream>
#include <string>
using namespace std;


int main() {
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	for (int i = 0; i < s1.length(); i++) {
		int tmp = 0;;
		tmp = s1[0];
		s1[0] = s1[2];
		s1[2] = tmp;
	}

	for (int i = 0; i < s2.length(); i++) {
		int tmp = 0;;
		tmp = s2[0];
		s2[0] = s2[2];
		s2[2] = tmp;
	}

	if (s1 > s2)
		cout << s1 << endl;
	else
		cout << s2 << endl;
	
}