//손익분기점

#include <iostream>
using namespace std;

int main() {
	int f_cost, v_cost, price;
	cin >> f_cost >> v_cost >> price;
	if (v_cost >= price) {
		cout << "-1" << endl;
		return 0;
	}
		
	cout << f_cost / (price - v_cost) + 1 << endl;
}