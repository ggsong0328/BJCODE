#include <iostream>
using namespace std;
double grade[1000] = { 0 };

int main() {
	double sub_num = 0;
	cin >> sub_num;
	for (int i = 0; i < sub_num; i++) {
		cin >> grade[i];
	}
	double max = grade[0];
	for (int i = 1; i < sub_num; i++) {
		if (max < grade[i])
			max = grade[i];
	}
	for (int i = 0; i < sub_num; i++) {
		grade[i] = grade[i] / max * 100;
	}
	double total = 0;
	for (int i = 0; i < sub_num; i++) {
		total += grade[i];
	}
	double avg = total / sub_num;

	cout.precision(2);
	cout << fixed;
	cout << avg << endl;
	return 0;
}