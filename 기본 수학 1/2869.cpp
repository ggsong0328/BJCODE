//달팽이는 올라가고 싶다
#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;
    int day;

	if ((V - B) % (A - B) == 0)
		day = (V - B) / (A - B) ;
	else
		day = (V - B) / (A - B) + 1;

	cout << day << endl;
}