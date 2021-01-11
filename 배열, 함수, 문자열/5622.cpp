#include <iostream>
#include <string>
using namespace std;

int main() {
	string list[] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
	string str;
	cin >> str;
	int index = 0;
	int dial[15] = { 0, };
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < list[j].length(); k++) {
                if (str[i] == list[j][k]) {
                    index = j + 2;
                    dial[i] = index + 1;
                }
            }
        }
    }
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        result += dial[i];
    }
    cout << result << endl;
}
