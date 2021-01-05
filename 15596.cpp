#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int>& a);

int main() {
	int n;
	cin >> n;
	vector<int> a;
	int num;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		a.push_back(num);
	}
	cout << sum(a) << endl;
}

long long sum(std::vector<int>& a) {
	long long ans = 0;
	for (auto& e : a) {
		ans += e;
	}
	return ans;
}